#include<iostream>
using namespace std;

int main(){
    int n, m;
    cout<<"Enter the number of rows and column seperated by a space: ";
    cin>>n>>m;

    
    int** arr = new int*[n];

    for(int i=0; i<n; i++){
        arr[i] = new int[m]; // Creating array inside array of size m meaning number of columns.
    }

    cout<<endl<<"Give input: "<<endl;
    //Taking input
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    cout<<endl<<"The 2D array looks like this: "<<endl;
    //Printing output
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //Releasing memory
    for(int i=0; i<n; i++){
        delete[] arr[i]; 
    }

    delete arr[];

}