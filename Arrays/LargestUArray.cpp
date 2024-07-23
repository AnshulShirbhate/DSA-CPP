#include <iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter the "<<n<<" elements of array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }


    for(int i = 1; i< n;i++){
        if(arr[0]<arr[i]){
            arr[0] = arr[i];
        }
    }

    cout<<"The largest element of array is: "<<arr[0];
    

    return 0;
}


// Second method

#include<iostream>
using namespace std;

void largest(int arr[], int n){
	int largest=0;
	for(int i=1; i<n; i++){
		if(arr[largest]<arr[i]){
			largest = i;
		}
	}
	cout<<"Largest Element is: "<<arr[largest];
}

int main(){
int n;
cout<<"Enter the value of N: ";
cin>>n;
cout<<"Enter the n elements of array: ";
int arr[n];
for(int i=0; i<n; i++){
	cin>>arr[i];
}

largest(arr, n);
}