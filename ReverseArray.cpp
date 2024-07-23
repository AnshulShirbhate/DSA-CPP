#include<iostream>
using namespace std;

void reversearr(int arr[], int n){
    cout<<"\nReverse array: ";
    for(int i=n-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[10];
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the elements of array: ";
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }

    //Inserted array
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }

    //Reverse array function call
    reversearr(arr, n);
    
    return 0;
}