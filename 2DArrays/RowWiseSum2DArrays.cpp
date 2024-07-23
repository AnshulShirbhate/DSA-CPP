#include<iostream>
using namespace std;

void rowWiseSum(int arr[3][3], int row, int col){
    for(int i=0; i<3; i++){
        int ans = 0;
        for(int j=0; j<3; j++){
            ans = ans + arr[i][j];
        }
        cout<<ans<<endl;
    }
}

int main(){
    int arr[3][3];

    cout<<"Enter the elements of array: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }

    cout<<endl<<"The array looks like this: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }

    cout<<endl<<"Row wise sum of array gives: "<<endl;
    rowWiseSum(arr, 3, 3);
}