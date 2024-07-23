/*
    Given an array of elements, you have to write a function using recursion to return true if the number if found.
*/

#include<iostream>
using namespace std;

bool isPresent(int *arr, int size, int target){
    if(arr[0] == target){
        return true;
    }
    if(size == 1 || size == 0){
        return false;
    }else{
        return isPresent(arr+1, size-1, target);
    }
    
}

int main(){
    int arr[] = {4, 6, 7 ,8, 1, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 10;
    cout<<isPresent(arr, size, target);
}