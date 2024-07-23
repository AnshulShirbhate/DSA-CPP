#include<iostream>
using namespace std;

void subarrays(int arr[], int size){
    //First loop is to find start
    for(int i=0; i < size; i++){
        //Second loop is to go till last
        for(int j=i; j<size; j++){
            //Third loop is to print the elements
            for(int k=i; k<=j; k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}

int main()
{
    int arr[5] = {1,2,3,8,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    subarrays(arr, size);
}