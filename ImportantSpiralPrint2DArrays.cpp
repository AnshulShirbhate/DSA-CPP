#include<iostream>
#include<vector>
using namespace std;

// vector<int> spiralPrint(vector<vector<int>>& matrix) {
//         vector<int> ans;
//         int rows = matrix.size();
//         int cols = matrix[0].size();

//         int startingRow = 0;
//         int endingRow = rows-1;
//         int startingCol = 0;
//         int endingCol = cols-1;
//         int count = 0, total = rows*cols;

//         while(count<total){
//             for(int index=startingCol; count<total && index<=endingCol; index++){
//                 ans.push_back(matrix[startingRow][index]);
//                 count++;
//             }
//             startingRow++;

//             for(int index = startingRow; count<total && index<=endingRow; index++){
//                 ans.push_back(matrix[index][endingCol]);
//                 count++;
//             }
//             endingCol--;

//             for(int index=endingCol; count<total && index>=startingCol; index--){
//                 ans.push_back(matrix[endingRow][index]);
//                 count++;
//             }
//             endingRow--;

//             for(int index=endingRow; count<total && index>=startingRow; index--){
//                 ans.push_back(matrix[index][startingCol]);
//                 count++;
//             }
//             startingCol++;
//         }
//         return ans;
// }


//Practice
vector<int> spiralPrint(vector<vector<int>> givenArray){
    int rows = givenArray.size();
    int cols = givenArray[0].size();
    int totalElements = rows*cols;

    int startingRow = 0, startingCol = 0, endingRow=rows-1, endingCol = cols-1;
    int count = 0;

    vector<int> ansArray;

    while(count<totalElements){
        for(int index=startingCol; count<totalElements && index<=endingCol; index++){
            ansArray.push_back(givenArray[startingRow][index]);
            count++;
        }
        startingRow++;

        for(int index=startingRow; count<totalElements && index<=endingRow; index++){
            ansArray.push_back(givenArray[index][endingCol]);
            count++;
        }
        endingCol--;

        for(int index=endingCol; count<totalElements && index>=startingCol; index--){
            ansArray.push_back(givenArray[endingRow][index]);
            count++;
        }
        endingRow--;

        for(int index=endingRow; count<totalElements && index>=startingRow; index--){
            ansArray.push_back(givenArray[index][startingCol]);
            count++;
        }
        startingCol++;
    }

    return ansArray;

}

int main(){
    vector<vector<int>> givenArray = { {1, 2, 3},
                                      {4, 5, 6,}, 
                                      {7, 8, 9} };
    vector<int> ans = spiralPrint(givenArray);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}