#include <iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"Enter the number to be checked: ";
    cin>>n;

    for(i = 2; i <= (n/2); i++){
        if(n%i == 0){
            cout<<"The number is not prime!";
            break;
        } else if(i == n/2){
            cout<<"The number is prime!";
        }
    }
    return 0;
}