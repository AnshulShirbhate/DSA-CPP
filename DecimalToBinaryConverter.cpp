//To convert decimal number to binary number.
//Steps: 
//1. Modulo the number by 2 and take the remainder and store it.
//2. Divide the number by 2 and again repeat step 1.
//3. Repeat step 1 and 2 until n(number) becomes zero.
//4. Reverse the number.


#include <iostream>
#include <math.h>
using namespace std;

int main(){

    // int num, rem, copy;

    // cout<<"Enter a number: ";
    // cin>>num;

    // copy = num;

    // cout<<"The binary of entered number is: "<<endl;
    // while(copy){
    //     rem = copy%2;
    //     copy = copy/2;
    //     cout<<rem;
    // }
    

    //Second method to solve the decimal to binary problem

    int n=15, ans=0, bit, i=0;
    while(n!=0){
        bit = n&1;
        n = n>>1;
        ans = (bit * pow(10,i)) + ans;
        i++;
    }
    
    cout<<ans;

    return 0;
}

