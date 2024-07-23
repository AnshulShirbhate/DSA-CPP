#include <iostream>
using namespace std;

int main(){

    int n,i=1;
    cin>>n;

    while(i<=n){
        
        //Space print karo
        int space = n - i;
        while(space){
            cout<<" ";
            space--;
        }

        //1st triangle print karo
        int j = 1;
        while(j<=i){
            cout<<j;
            j++;
        }

        //2nd triangle print karo
        int start = i - 1;
        while(start){
            cout<<start;
            start--;
        } 

        cout<<endl;
        i++;
    }

    return 0;
}