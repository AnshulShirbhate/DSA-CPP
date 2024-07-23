//Using while loop
// while(i<n){
//     while(j<n-i){
//         if(arr[j]>arr[j+1]){
//             swap(arr[j], arr[j+1]);
//         }
//         j++;
//     }
//     i++;
// }


#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size){
    for(int i=1; i<size; i++){
        for(int j = 0; j < size - i; j++){
            if(arr[j]> arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bubbleSort(arr, n);
    cout<<"\nSorted array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}