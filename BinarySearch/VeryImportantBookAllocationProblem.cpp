// bool isPossibleSolution(vector<int> arr, int n, int m, int mid){
//     int tempStudents=1;
//     int sum=0;
//     for(int i=0; i<n; i++){
//         if(sum + arr[i] <= mid){
//             sum+=arr[i];
//         }else{
//             tempStudents++;
//             if(tempStudents > m || arr[i] > mid){
//                 return false;
//             }
//             sum=arr[i];
//         }
//     }
//     return true;
// }

bool isPossibleSolution(vector<int> &arr, int n, int m, int mid){
    int sum=0;
    int tempStudent=1;

    for(int i=0; i<n; i++){
        if(sum+arr[i] <= mid){
            sum+=arr[i];
        }else{
            tempStudent++;
            if(tempStudent>m || arr[i] > mid){
                return false;
            }
            sum = arr[i];
        }
    }
    return true;
}

int findPages(vector<int>& arr, int n, int m) {
    // Write your code here.
    if(m>n){
        return -1;
    }
    int s = 0;
    int sum = 0;
    for(int i: arr){
        sum+=i;
    }
    int e = sum;
    int mid = s + (e-s)/2;
    int ans =-1;

    while(s<=e){
        if(isPossibleSolution(arr, n, m, mid)){
            ans = mid;
            e = mid-1;
        }else{
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}