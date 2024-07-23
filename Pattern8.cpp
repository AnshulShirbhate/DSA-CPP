#include <iostream>
using namespace std;

int main(){

    int n,i=1,j;
    cin>>n;

    while(i<=n){
        j=1;
        int value = i;
        while(j<=i){
            cout<<value;
            j++;
            value++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}