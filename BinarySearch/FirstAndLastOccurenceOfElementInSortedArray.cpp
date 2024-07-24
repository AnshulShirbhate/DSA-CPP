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
	return {firstOccurence(arr, arr.size(), x), lastOccurence(arr, arr.size(), x)};
}

