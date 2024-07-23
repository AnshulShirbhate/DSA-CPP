#include<iostream>
#include<string>
using namespace std;

void reverseUsingRecursion(string &str, int start, int end){
    if(start>=end){
        return;
    }
    swap(str[start++], str[end--]);
    reverseUsingRecursion(str, start, end);
}

int main(){
    string str = "anshul";
    reverseUsingRecursion(str, 0, str.size()-1);
    cout<<str;
}