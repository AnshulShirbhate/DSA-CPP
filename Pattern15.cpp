#include <iostream>
using namespace std;

int main(){

    int n,i=1;
    cin>>n;
    while(i<=n){
        int j=1;
        char ch = 'A' + n - i;
        while(j<=i){
            cout<<ch<<" ";
            j++;
            ch++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}