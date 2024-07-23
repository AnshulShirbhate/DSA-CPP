// Code with harry's quick sort

#include <iostream>
using namespace std;

// int partition(int arr[], int low, int high)
// {
//     int pivot = arr[low];
//     int i = low + 1, j = high;

//     do
//     {
//         while (arr[i] <= pivot)
//         {
//             i++;
//         }

//         while (arr[j] > pivot)
//         {
//             j--;
//         }

//         if (i < j)
//         {
//             swap(arr[i], arr[j]);
//         }
//     } while (i < j);

//     // Finally interchange the pivot and arr[j]
//     swap(arr[low], arr[j]);

//     return j;
// }

// void quicksort(int arr[], int low, int high)
// {
//     int partitionindex; // This will be the index of pivot after the partition procedure is done.

//     if (low < high)
//     {
//         partitionindex = partition(arr, low, high);
//         quicksort(arr, low, partitionindex - 1);
//         quicksort(arr, partitionindex + 1, high);
//     }
// }

// int main()
// {
//     int n;
//     cout<<"Enter the size of the array: \n";
//     cin>>n;
    
//     int *arr = new int(n);
//     cout<<"Enter the elements of the array: ";
    
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     quicksort(arr, 0, n - 1);
//     cout << "The sorted array is: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }



// Practice

int partition(int arr[], int low, int high){
    int pivot = arr[low], i = low+1, j = high;

    do{
        while(pivot>=arr[i]){
            i++;
        }

        while(pivot<arr[j]){
            j--;
        }

        if(i<j){
            swap(arr[i], arr[j]);
        }
    }while(i<j);

    swap(arr[low], arr[j]);

    return j;
}

void quicksort(int arr[], int low, int high){
    int partitionindex;
    if(low<high){
        partitionindex = partition(arr, low, high);
        quicksort(arr, low, partitionindex-1);
        quicksort(arr, partitionindex+1, high );
    }
}

int main(){
    int arr[] = {9, 5, 4, 87, 34, 56,34,76,348, 23};
    int size = sizeof(arr)/sizeof(arr[0]);
    int low = 0, high = size-1;

    quicksort(arr, low, high);
    cout<<"The sorted array: \n";
    for(int i = 0; i< size; i++){
        cout<<arr[i]<<" ";
    }
}