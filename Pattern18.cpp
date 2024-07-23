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
        int j = n - i + 1;
        while(j>0){
            cout<<i;
            j--;
        }
        cout<<endl;
        i++;
    }

    return 0;
}