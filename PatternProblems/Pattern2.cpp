#include <iostream>
using namespace std;

int main(){

    int n,i=0,j;

    cout<<"Enter the value for N: ";
    cin>>n;

    while(i<n){
        j=1;
        while(j<=n){
            cout<<j;
            j++;
        }
        i++;
        cout<<endl;
    }

    return 0;
}