#include<iostream>
using namespace std;

void waveprint(int arr[3][3], int rows, int columns){
    for(int cols=0; cols<columns; cols++){
        if(cols%2 == 0){
            for(int i=0; i<rows; i++){
                cout<<arr[i][cols]<<" ";
            }
        }else{
            for(int i=rows-1; i>=0; i--){
                cout<<arr[i][cols]<<" ";
            }
        }
    }
    cout<<endl;
}

int main()
{
    int rows, columns;
    cout<<"Enter the rows and columns: ";
    cin>> rows >> columns;
    int arr[3][3];


    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<rows; i++){
        cout<<"Row "<<i<<": ";
        for(int j=0; j<columns; j++){
            cin>>arr[i][j];
        }
    }


    // cout<<"The array looks like: "<<endl;
    // for(int i=0;i<rows; i++){
    //     for(int j=0; j<columns; j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    //Wave print
    waveprint(arr, rows, columns);
    return 0;
}