/*

    The Algorithm library contains a lot of basic algorithms needed for the programmers to quickly solve the problems.
    
    The various methods of algorithm library are:
    1. sort(begin, end): Intro sort is used which is a combination of heap sort, quick sort and insertion sort.
    2. reverse(begin, end)
    3. max(first, second)
    4. min(first, second)
    5. binary_search(begin, end, element to search)
    6. lower_bound(begin, end, element): Returns the index+1 of the element.
    7. rotate(begin, begin + n, end): Moves each element n step forward and returns the rotated array.

*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(5);
    vec.push_back(8);
    vec.push_back(11);

    // This code returns boolean value 0 or 1.
    cout<<"To check if some element is present in the vector or not Example 4: "<<binary_search(vec.begin(), vec.end(), 4);

    // To get the iterator of the element present use lower_bound method.
    cout<<"\nIndex of 5: "<<lower_bound(vec.begin(), vec.end(), 5)-vec.begin();

}