#include <iostream>
using namespace std;

int main(){

    int n,i=1;
    cin>>n;

    while(i<=n){
        int space = i - 1;
        while(space>0){
            cout<<" ";
            space--;
        }
        int j = i;
        while(j<=n){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}