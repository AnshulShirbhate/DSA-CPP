// #include <iostream>
// using namespace std;

// void insertionSort(int arr[], int n){
//     int key;
//     cout<<"\nEnter the "<<n<<" elements of array: ";
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     for(int i=1; i<n; i++){
//         key = arr[i];
//         int j;
//         for(j=i-1; j>=0; j--){
//             if(key<arr[j]){
//                 arr[j+1] = arr[j];
//             }else{
//                 break;
//             }
//         }
//         arr[j+1] = key;
//     }

//     cout<<"\nSorted array: ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     // int *arr = new int(n);
//     int arr[n];
//     insertionSort(arr, n);
//     return 0;
// }





#include<iostream>
using namespace std;

void insertionSort(int arr[], int size){
    for(int i=1; i<size; i++){
        int key=arr[i], j;
        for(j=i-1; j>=0; j--){
            if(arr[j] > key){
                arr[j+1] = arr[j];
            }else{
                break;
            }
        }
        arr[j+1] = key;
    }
}

int main(){
    int arr[] = {6, 7, 1, 4, 2, 0};
    int size = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, size);
    cout<<"The sorted array is: \n";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}