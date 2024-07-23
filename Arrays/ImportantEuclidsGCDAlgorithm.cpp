/*

    Euclid's formula for GCD = gcd(a-b, b) until one of the element is 0 the other element will be the answer.

*/

#include<iostream>
using namespace std;

int gcd(int num1, int num2){
    if(num1 == 0){
        return num2;
    }else if(num2 == 0){
        return num1;
    }

    while (num1 != num2){
        if(num1>num2){
            num1 =  num1 - num2;
        }
        else{
            num2 = num2-num1;
        }
    }
    return num1;
}

int main(){
    int num1 = 72, num2 = 24;
    cout<<"The GCD of "<<num1<<" and "<<num2<<" is: "<<gcd(num1, num2);
}