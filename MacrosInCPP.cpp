#include <iostream>
using namespace std;

#define pi 3.14 // No space is allocated for this macro and it replaces all the pi's written in the program with the value given.
                // It is not a variable and does not takes any space in the memory and acts before the program compilation.

int main(){
    int area, r=5;
    area = pi * r * r;
    cout<<area;
}