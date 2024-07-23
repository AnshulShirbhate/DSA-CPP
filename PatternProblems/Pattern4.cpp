#include <iostream>
using namespace std;

int main(){

    int n,i=1,j,count=1;
    cout<<"Enter value for N: ";
    cin>>n;

    while(i<=n){
        j = 1;
        while(j<=n){
            cout<<count;
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;

}

    