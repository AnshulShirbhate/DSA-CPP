#include<iostream>
#include<vector>
using namespace std;

bool binarySearch(vector<vector<int>> matrix, int target){
    int rows = matrix.size();
    int cols = matrix[0].size();

    int start = 0;
    int end = rows*cols - 1;
    int mid = (start+end)/2;

    while(start<=end){
        int element = matrix[mid/cols][mid%cols];
        if(target == element){
            cout<<"Element found at row: "<<mid/cols+1<<" and column: "<<mid%cols+1;
            return 1;
        }

        if(element < target){
            start = mid+1;
        }else{
            end = mid-1;
        }

        mid = (start+end)/2;
    }
    cout<<"Element not found!";
    return false;
}

int main(){
    vector<vector<int>> matrix = { {1,2,3},
                                   {4,5,6},
                                   {7,8,9}};
    binarySearch(matrix, 4);
}   