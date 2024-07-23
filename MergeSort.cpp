//Practice

#include <iostream>
#include <vector>
using namespace std;

void merge(int *arr, int start, int mid, int end){
	int i=start, j=mid+1, k=start;
	int *arr2 = new int[end+1];

	while(i<=mid && j <= end){
		if(arr[i] < arr[j]){
			arr2[k] = arr[i];
			i++;
			k++;
		}else{
			arr2[k] = arr[j];
			j++;
			k++;
		}
	}

	while(i<=mid){
		arr2[k] = arr[i];
		i++;
		k++;
	}

	while(j<=end){
		arr2[k] = arr[j];
		j++;
		k++;
	}

	for(int i=start; i<=end; i++){
		arr[i] = arr2[i];
	}
}

void mergesort(int *arr, int start, int end){
	if(start<end){
		int mid = start + (end-start)/2;
		mergesort(arr, start, mid);
		mergesort(arr, mid+1, end);
		merge(arr, start, mid, end);
	}
}

int main(){
	int size;
	cout<<"Enter the size of the array: ";
	cin>>size;
	int *arr = new int[size];

	cout<<"Enter the elements of array: ";
	for(int i=0; i< size; i++){
		cin>>arr[i];
	}

	int low = 0, high = size-1;
	mergesort(arr, low, high);

	cout<<"The sorted array: \n";
	for(int i=0; i< size; i++){
		cout<<arr[i]<<" ";
	}
}



// #include <iostream>
// using namespace std;

// void printarr(int arr[], int n){
// 	for(int i=0; i<n; i++){
// 		cout<<arr[i]<<" ";
// 	}
// }

// void merge(int arr[], int low, int mid, int high){
// 	int i=low,  j=mid+1, k=low;
// 	int arr2[high+1];
// 	while(i<=mid && j<=high){
// 		if(arr[i]<arr[j]){
// 			arr2[k] = arr[i];
// 			i++;
// 			k++;
// 		}else{
// 			arr2[k] = arr[j];
// 			j++;
// 			k++;
// 		}
// 	}

// 	while(i<=mid){
// 		arr2[k] = arr[i];
// 		i++;
// 		k++;
// 	}

// 	while(j<=high){
// 		arr2[k] = arr[j];
// 		j++;
// 		k++;
// 	}

// 	for(int i=low; i<=high; i++){
// 		arr[i] = arr2[i];
// 	}
// }

// void mergesort(int arr[], int low, int high){
// 	if(low<high){
// 		int mid = (low+high)/2;
// 		mergesort(arr, low, mid);
// 		mergesort(arr, mid+1, high);
// 		merge(arr, low, mid, high);
// 	}
// }


// int main(){
// 	int arr[8] = {5,6,45,9,90,0,7, 12};
// 	int n = sizeof(arr)/sizeof(arr[0]);
// 	mergesort(arr, 0, n-1);
// 	printarr(arr, n);
// 	return 0;
// }