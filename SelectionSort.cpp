// #include<iostream>
// using namespace std;

// int main(){
//     int n, count=0;
//     cout<<"Enter the size of array: \n";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the "<<n<<" elements of array: \n";

//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     //Selection sort code
//     for(int i=0; i<n-1; i++){
//         int minindex = i;
//         for(int j=i+1;j<n;j++){      
//             if(arr[minindex] > arr[j]){
//                 minindex = j;
//                 count++;
//             }
//         }
//         swap(arr[minindex], arr[i]);
//     }
    

//     cout<<"\nThe sorted array is: \n";
//     for(int i=0; i<n;i++){
//         cout<<arr[i]<<"\n";
//     }
    
//     cout<<"The number of swaps will be: "<<count;
//     return 0;
// }

//Using while loop
// while(i<n-1){
//     minindex = i;
//     while(j<n){
//         if(arr[minindex]>arr[j]){
//             minindex=j;
//         }
//         j++;
//     }
//     swap(arr[minindex], arr[i]);
//     i++;
// }


#include <iostream>
using namespace std;

void selectionsort(int arr[], int size){
    int minindex;
    for(int i = 0; i < size - 1; i++){
        minindex=i;
        for(int j=i+1; j< size; j++){
            if(arr[j]< arr[minindex]){
                minindex = j;
            }
        }
        swap(arr[i], arr[minindex]);
    }
}

int main(){
    int arr[8] = {5, 45, -1, 46, 3, 0, 2, 1};
    int size = sizeof(arr)/sizeof(arr[0]);

    selectionsort(arr, size);
    cout<<"The sorted array is: \n";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}