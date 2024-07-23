/*
    Given an array, you have to check if the array is sorted or not using the help of recursion and return true if sorted.
*/



#include<iostream>
#include<vector>
using namespace std;

bool isSorted(int arr[], int size){

    //Base case
    if(size == 0 || size == 1){
        return true;
    }

    //If this is the case the function stops and returns false
    if(arr[0] > arr[1]){
        return false;
    }else{
        //The array is started from the next element and size will be reduced by 1
        return isSorted(arr+1, size-1);
    }
}

int main(){
    int arr[] = {1, 2, 4, 5, 6, 7};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<(isSorted(arr, size)? "Sorted": "Not Sorted");
}