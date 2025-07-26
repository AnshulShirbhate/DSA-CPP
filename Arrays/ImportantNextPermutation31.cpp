// https : // youtu.be/ho4gTCr0QSk?si=JsucAJ7MvA5qciZT

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// void nextPermutation(vector<int> &nums)
// {
//     int infpt = 0, n = nums.size() - 1;
//     for (int i = n; i > 0; i--)
//     {
//         if (nums[i] > nums[i - 1])
//         {
//             infpt = i;
//             break;
//         }
//     }

//     if (infpt == 0)
//     {
//         sort(nums.begin(), nums.end());
//     }
//     else
//     {
//         int min = INT_MAX;
//         int toSwap = nums[infpt - 1];
//         for (int j = infpt; j <= n; j++)
//         {
//             if (nums[j] - toSwap > 0 && nums[j] - toSwap < min)
//             {
//                 swap(nums[infpt - 1], nums[j]);
//             }
//         }
//         sort(nums.begin() + infpt, nums.end());
//     }
// }

void nextPermutation(vector<int> &nums)
{
    int breakp = -1;
    int n = nums.size();

    // Search for break point from the last of the array. Break point is when array[i] < arr[i+1]. Here array[i] will be the break point.
    for (int i = n - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1])
        {
            breakp = i;
            break;
        }
    }

    // If we didn't get any break point meaning that the array is already in a descending order then just reverse the array.
    if (breakp == -1)
    {
        reverse(nums.begin(), nums.end());
    }
    else
    {
        // If we found a breakpoint then simply traverse the array from the ending till the break point and if in the process
        // we find an element greater then the breakpoint then simply swap them and break the loop.
        for (int i = n - 1; i > breakp; i--)
        {
            if (nums[i] > nums[breakp])
            {
                swap(nums[i], nums[breakp]);
                break;
            }
        }


        // After the loop is broken reverse the array part after the breakpoint that will be array.begin() + breakpoint + 1.
        reverse(nums.begin() + breakp + 1, nums.end());
    }

    // Finally return the array if required.
}

int main()
{
    vector<int> nums = {1, 2, 3};
    nextPermutation(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}