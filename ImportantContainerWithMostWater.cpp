#include <iostream>
#include <vector>
using namespace std;

// Two Pointer Approach with optimal solution

int maxArea(vector<int> &height)
{
    int maxWater = 0;
    int currWater;
    int size = height.size();
    int left = 0, right = size - 1;
    while (left < right)
    {
        currWater = min(height[left], height[right]) * (right - left);
        if (currWater > maxWater)
        {
            maxWater = currWater;
        }
        (height[left] > height[right] ? right-- : left++);
    }
    return maxWater;
}

// Brute force approach with O(N ^ 2) time complexity.

// int maxArea(vector<int> height)
// {
//     int maxWater = 0;
//     int currWater;
//     for (int i = 0; i < height.size() - 1; i++)
//     {
//         for (int j = i + 1; j < height.size(); j++)
//         {
//             currWater = min(height[i], height[j]) * (j - i);
//             if (currWater > maxWater)
//             {
//                 maxWater = currWater;
//             }
//         }
//     }
//     return maxWater;
// }

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << maxArea(height);
}