#include<iostream>
using namespace std;

int main(){

    int n,i=0,j;

    cout<<"Enter the value for N: ";
    cin>>n;

    while(i<n){
        j=n;
        while(j>0){
            cout<<j;
            j--;
        }
        i++;
        cout<<endl;
    }

    return 0;
}