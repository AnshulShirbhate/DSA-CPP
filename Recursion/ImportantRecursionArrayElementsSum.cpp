/*
    Given an array, you have to find the sum of all elements using recursion.
*/

#include<iostream>
using namespace std;

int arrayElementsSum(int arr[], int size){
    if(size == 1){
        return arr[0];
    }

    return arr[0] + arrayElementsSum(arr+1, size-1);
}

int main(){
    int arr[] = {1, 5, 6, 7 ,8, 3};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<arrayElementsSum(arr, size);
}