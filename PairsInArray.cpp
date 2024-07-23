#include<iostream>
using namespace std;

void pairs(int arr[], int size){
    for(int i=0; i< size-1; i++){
        for(int j=i+1; j<size; j++){
            cout<<"("<<arr[i]<<", "<<arr[j]<<") ";
        }
        cout<<"\n";
    }
}

int main()
{
    int arr[5] = {1,2,3,8,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    pairs(arr, size);
}