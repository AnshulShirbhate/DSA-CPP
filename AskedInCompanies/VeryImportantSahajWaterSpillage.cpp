#include <iostream>
#include <vector>
#include <numeric>  // For std::accumulate
using namespace std;

// Function to check if a given capacity is enough to deliver water to all villages within M trips
bool canDeliverWithCapacity(const vector<int>& capacities, int maxTrips, int capacity) {
    int trips = 0;
    for (int water : capacities) {
        // Calculate the number of trips required for this village
        trips += (water + capacity - 1) / capacity;
        if (trips > maxTrips) {
            return false;
        }
    }
    return trips <= maxTrips;
}

// Function to calculate the minimum capacity and the resulting spillage
int minimumCapacitySpillage(int noOfVillages, const vector<int>& capacities, int maxTrips) {
    if (noOfVillages == 0) {
        return 0; // If there are no villages, no spillage occurs.
    }

    // Determine the bounds for binary search
    int low = 1;
    int high = accumulate(capacities.begin(), capacities.end(), 0); // Sum of all water needs

    int minCapacity = -1;

    // Binary search to find the minimum possible capacity
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (canDeliverWithCapacity(capacities, maxTrips, mid)) {
            minCapacity = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    if (minCapacity == -1) {
        return -1; // If we never found a valid capacity
    }

    // Calculate spillage using the minimum capacity
    int spillage = 0;
    for (int water : capacities) {
        int tripsNeeded = (water + minCapacity - 1) / minCapacity; // Equivalent to ceil(water / minCapacity)
        int fullTripsWater = tripsNeeded * minCapacity;
        spillage += fullTripsWater - water;
    }

    return spillage;
}

int main() {
    // Input variables
    int noOfVillages, maxTrips;
    cin >> noOfVillages;
    vector<int> capacities(noOfVillages);
    for (int i = 0; i < noOfVillages; ++i) {
        cin >> capacities[i];
    }
    cin >> maxTrips;

    // Output the result
    cout << minimumCapacitySpillage(noOfVillages, capacities, maxTrips) << endl;

    return 0;
}
