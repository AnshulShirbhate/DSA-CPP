#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string s) {
        int st=0, e=s.size()-1;
        while(st<e){
            if(!isalnum(s[st])){
                st++;
                continue;
            }
            if(!isalnum(s[e])){
                e--;
                continue;
            }
            if(tolower(s[st]) != tolower(s[e])){
                return false;
            }else{
                st++;
                e--;
            }
        }

        return true;
}


int main(){
    string s = "Is this a palindrome?";
    cout<<(isPalindrome(s)? "Yes": "No");
}

