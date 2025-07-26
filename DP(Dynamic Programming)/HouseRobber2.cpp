#include<iostream>
#include<vector>
using namespace std;

int solve1(vector<int> &houses, int ind){
    if(ind < 0){
        return 0;
    }

    int notpick = 0 + solve1(houses, ind-1);
    int pick = houses[ind] + solve1(houses, ind-2);
    int maxi = max(pick, notpick);
    return maxi;
}

int solve2(vector<int> &houses, int ind){
    if(ind < 1){
        return 0;
    }

    int notpick = 0 + solve2(houses, ind-1);
    int pick = houses[ind] + solve2(houses, ind-2);
    int maxi = max(pick, notpick);
    return maxi;
}

int maxRobbed(vector<int> &houses){
    int ans = max(solve1(houses, houses.size()-2), solve2(houses, houses.size()-1));
    return ans;
}

int main(){
    vector<int> houses = {1, 3, 5 ,6 , 4};
    int maxi = maxRobbed(houses);
    cout<<maxi;
}