int findPeak(vector<int>& arr){
        int start=0, end = arr.size()-1;
        int mid = (start+end)/2;
        while(start<end){
            if(arr[mid+1] > arr[mid]){
                start=mid+1;
            }else{
                end = mid;
            }
            mid = (start+end)/2;
        }
        return mid;
    }
    int peakIndexInMountainArray(vector<int>& arr) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        int ans = findPeak(arr);
        return ans;
    }