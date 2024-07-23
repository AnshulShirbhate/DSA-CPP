/*
    Given a sorted array, you have to return true if target element is present using binary search using recursion.
*/

#include<iostream>
using namespace std;

bool binarySearchRecursion(int arr[], int start, int end, int target){
    if(start>end){
        return false;
    }
    int mid = (start+end) /2;

    if(arr[mid] == target){
        return true;
    }else if(arr[mid] > target){
        return binarySearchRecursion(arr,start, mid-1, target);
    }else{
        return binarySearchRecursion(arr, mid+1, end, target);
    }

}



int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 11};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 1;
    cout<<binarySearchRecursion(arr, 0, size, target);
}