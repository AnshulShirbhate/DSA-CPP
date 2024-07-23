#include <iostream>
using namespace std;

int main(){

    int n,i=1;
    cin>>n;

    while(i<=n){
        
        //1st triangle print karo
        int j = 1;
        while(j<=n - i + 1){
            cout<<j;
            j++;
        }

        //2nd triangle print karo
        j = i - 1;
        while(j){
            cout<<"*";
            j--;
        }

        //3rd triangle print karo
        j = i - 1;
        while(j){
            cout<<"*";
            j--;
        }

        //4th triangle print karo
        j = n - i + 1;
        while(j){
            cout<<j;
            j--;
        }


        cout<<endl;
        i++;
    }

    return 0;
}