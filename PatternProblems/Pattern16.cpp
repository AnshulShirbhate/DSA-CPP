#include <iostream>
using namespace std;

int main(){

    int n,i=1;
    cin>>n;

    while(i<=n){
        int space = n - i;
        
        while(space>0){
            cout<<" ";
            space--;
        }

        int j = 1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}