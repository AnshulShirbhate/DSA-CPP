#include<iostream>
#include<string>
using namespace std;

bool palindromeOrNotRecursion(string str, int start, int end){
    if(str.length() == false)return false;
    if(start>=end){
        return true;
    }
    if(str[start] != str[end])return false;
    return palindromeOrNotRecursion(str, ++start, --end);
}

int main(){
    string str = "anshulluhsna";
    cout<<palindromeOrNotRecursion(str, 0, str.length()-1);
}