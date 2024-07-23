#include<iostream>
using namespace std;


// If a function's body contains only a single line of code or max 2-3 line of code then the compiler accepts the function as inline
// function. It acts just like the macros i.e. before compilation it replaces everyplace where it is used with the returned statement.

inline int getMax(int &a, int &b){  
    return (a>b? a:b);
}

int main(){
    int a=1, b=2;
    cout<<getMax(a,b)<<endl;
    a+=3;
    b+=1;
    cout<<getMax(a,b)<<endl;
}