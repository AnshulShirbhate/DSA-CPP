#include<iostream>
using namespace std;

int powerOf(int num, int pow){
    if(pow == 0){
        return 1;
    }
    return num * powerOf(num, pow-1);
}

int main(){
    int num, pow;
    cout<<"Enter the number and it's power to find: ";
    cin>>num>>pow;
    cout<<powerOf(num, pow);
}