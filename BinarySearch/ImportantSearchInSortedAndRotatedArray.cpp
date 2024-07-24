#include<iostream>
using namespace std;

int bs(int *arr, int start, int end, int key){
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid] == key){
            return mid;
        } else if(arr[mid]>key){
            end = mid-1;
        } else{
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int getPivot(int *arr, int n){
    int start=0, end=n-1;
    int mid = start + (end-start)/2;

    while(start<end){
        if(arr[mid] >= arr[0]){
            start = mid+1;
        } else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return mid;
}

int search(int* arr, int n, int key) {
    int pivot = getPivot(arr, n);
    if(key >= arr[pivot] && key <= arr[n-1]){
        return bs(arr, pivot, n-1, key);
    } else{
        return bs(arr, 0, pivot-1, key);
    }
}