#include<iostream>
#include<vector>
using namespace std;

void wavePrint(vector<vector<int>> givenArray, int rows, int cols){
    for(int col=0; col<cols; col++){
        if( col & 1){ // Even number gives 0 and odd number gives 1 when doing and operation.
            // Odd number of col
            for(int row=rows-1; row>=0; row--){
                cout<<givenArray[row][col]<<" ";
            }
        }else{
            // Even numbered column
            for(int row=0; row<rows; row++){
                cout<<givenArray[row][col]<<" ";
            }
        }
    }
}

int main(){
    vector<vector<int>> givenArray = { {1, 2, 3},
                                      {4, 5, 6,}, 
                                      {7, 8, 9} };
    wavePrint(givenArray, 3, 3);
}