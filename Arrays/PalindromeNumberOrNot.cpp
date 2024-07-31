#include <iostream>
using namespace std;

bool PalindromeOrNot(int num){
    int copy = num;
    int lastdig, reversenum=0;

    while(copy){
        lastdig = copy%10;
        copy = copy/10;
        reversenum = (reversenum * 10) + lastdig;
    }

    return reversenum == num;
}

int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    if(PalindromeOrNot(n)){
        cout<<"Number is Palindrome!";
    }else{
        cout<<"Number is not palindrome!";
    }

    return 0;
}