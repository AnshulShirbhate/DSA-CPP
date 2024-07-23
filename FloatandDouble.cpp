#include<iostream>
//This header file contains the setprecision method for manipulating the nummbers after the decimal point.
#include <iomanip>
using namespace std;

int main(){
    float num1 = 34.6789;
    double num2 = 45678.4343563;

//Fixed and setprecision needs to be written before the variables to output the variable value as we 
//want them.

    //In this case the float variable will have only 4 numbers after the decimal point.
    cout<<"Num 1: "<<fixed<<setprecision(4)<<num1<<endl;

    //In this case the double variable will have 7 numbers after the decimal place.
    cout<<"Num 2: "<<fixed<<setprecision(7)<<num2<<endl;

    return 0;
}