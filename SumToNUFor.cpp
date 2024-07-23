#include <iostream>
using namespace std;

int main(){
    int sum = 0,n; 

    cout<<"Enter a number to print sum of numbers upto: ";
    cin>>n;

    for(int i = 1; i<=n; i++){
        sum = sum+i;
    }

    cout<<"The sum of numbers from 1 to N is: "<<sum;
    return 0;
}