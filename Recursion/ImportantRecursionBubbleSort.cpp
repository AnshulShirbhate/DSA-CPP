#include<iostream>
using namespace std;

void bubbleSortUsingRecursion(int arr[], int size){
    if(size ==0 || size == 1){
        return;
    }

    for(int i=0; i<size-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }
    bubbleSortUsingRecursion(arr, size-1);
}

int main(){
    int arr[] = {6, 5, 6, 8, 20, 2, 1, 100};
    bubbleSortUsingRecursion(arr, sizeof(arr)/sizeof(arr[0]));
    for(int element: arr){
        cout<<element<<" ";
    }
}