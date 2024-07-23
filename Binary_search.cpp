// #include<iostream>
// using namespace std;
// int main()
// {
// 	int i,h,n,s,mid,arr[10],item;
// 	s=0;
// 	cout<<"Enter the size of array: \n";
// 	cin>>n;
// 	h=n-1;
// 	cout<<"Enter the elements of array: \n";
// 	for(i=0;i<n;i++)
// 	{
// 		cin>>arr[i];
// 	}
// 	cout<<"Enter the item you want to find:\n";
// 	cin>>item;
// 	for(i=0;i<n;i++)
// 	{
// 	mid=(s+h)/2;
// 	if(arr[mid]==item)
// 	{
// 		cout<<"Element found at location: "<<mid;
// 		break;
// 	}
// 	else if(arr[mid]>item)
// 	{
// 		h=mid-1;
// 	}
// 	else 
// 	{
// 		s=mid+1;
// 	}
// 	}
// 	if(i>=n)
// 	{
// 		cout<<"Item not found.";
// 	}

// 	return 0;
// }


#include <iostream>
using namespace std;

void binarySearch(int arr[], int n, int target){
	int start=0, end = n-1, mid;
	while(start<=end){
		mid  = (start+end)/2;
		if(arr[mid] == target){
			cout<<"\nTarget value found at index: "<<mid;
			return;
		}else if(arr[mid]>target){
			end = mid-1;
		}else{
			start = mid+1;
		}
	}
	if(start>end){
		cout<<"\nTarget value not found in the array!";
	}
}

int main(){
	int target, n;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int arr[n];
	cout<<"\nEnter the array elements in ascending order: ";
	for(int i=0; i<n; i++){
		cin>> arr[i];
	}
	cout<<"\nEnter the value to search for: ";
	cin>>target;
	binarySearch(arr, n, target);
}