#include <iostream>
using namespace std;

int main(){

    int n,i=1,j,num=1;
    cin>>n;

    while(i<=n){
        j=1;
        while(j<=i){
            cout<<num<<" ";
            num++;
            j++;
        }
        i++;
        cout<<endl;
    }

    return 0;
}