int firstOccurence(vector<int> &arr,int size, int x){
	int start = 0, end= size;
	int mid = start + (end-start)/2;
	int ans = -1;
	while(start<=end){
		if(arr[mid] == x){
			ans=mid;
			end=mid-1;
		} else if(x > arr[mid]){
			start = mid+1;
		} else{
			end = mid-1;
		}
		mid = start + (end-start)/2;

	}
	return ans;
}

int lastOccurence(vector<int> &arr,int size, int x){
	int start = 0, end= size;
	int mid = start + (end-start)/2;
	int ans = -1;
	while(start<=end){
		if(arr[mid] == x){
			ans=mid;
			start=mid+1;
		} else if(x > arr[mid]){
			start = mid+1;
		} else{
			end = mid-1;
		}
		mid = start + (end-start)/2;
	}
	return ans;
}

vector<int> searchRange(vector<int> &arr, int x)
{
    // 5 6 7 7 7 8 9 10 10
    // 10
	return (lastOccurence(arr, arr.size(), x)-firstOccurence(arr, arr.size(), x)) + 1;
}

