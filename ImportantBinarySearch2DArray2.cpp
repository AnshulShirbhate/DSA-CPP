#include<iostream>
#include<vector>
using namespace std;

bool binarySearch(vector<vector<int>> matrix, int target){
    int rows = matrix.size();
    int cols = matrix[0].size();

    int rowIndex = 0, colIndex = cols - 1;

    
    while(rowIndex < rows && colIndex >=0){
        int element = matrix[rowIndex][colIndex];
        if(target == element){
            return 1;
        }

        if(element < target){
            rowIndex++;
        }else{
            colIndex--;
        }
    }
    return false;
}

int main(){
    vector<vector<int>> matrix = { {1,2,3},
                                   {4,5,6},
                                   {7,8,9}};
    cout<<binarySearch(matrix, 9);
}   