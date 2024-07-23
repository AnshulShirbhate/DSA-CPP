#include<iostream>
#include<string>
using namespace std;

string removeSpacesAndReplace(string s){
    string news;
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            news.push_back('@');
            news.push_back('4');
            news.push_back('0');
        }else{
            news.push_back(s[i]);
        }
    }
    s = news;
    return s;
}

int main()
{
    string s = "This is a string";
    cout<<removeSpacesAndReplace(s);   
}