#include <iostream>
#include <vector>
using namespace std;



// void rotate(vector<int> &nums, int k)
// {

//     int size = nums.size();
//     while (k)
//     {
//         int key = nums[size - 1], i = size - 1;
//         while (i > 0)
//         {
//             nums[i] = nums[i - 1];
//             i--;
//         }
//         nums[0] = key;
//         k--;
//     }
// }


void rotate(vector<int> &nums, int k){
    vector<int> temp(nums.size());

    for(int i=0; i<nums.size(); i++){
        temp[(i+k)%nums.size()] = nums[i];
    }

    nums = temp;
}


void print(vector<int> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    int rotationNum = 3;
    rotate(nums, rotationNum);
    print(nums);
}