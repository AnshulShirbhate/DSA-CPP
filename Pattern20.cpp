#include <iostream>
using namespace std;

int main(){

    int n,i=1;
    cin>>n;
    int start = 1;

    while(i<=n){
        int space = n - i;
        while(space>0){
            cout<<"  ";
            space--;
        }
        int j = 1;
        while(j<=i){
            cout<<start<<" ";
            j++;
            start++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}