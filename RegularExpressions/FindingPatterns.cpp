#include<iostream> 
#include<regex>
using namespace std;

int main(){
    string a = "This is a string and keyword is to be found in this string";

    regex b("(.*)ing");

    if(regex_match(a, b)){
        cout<<"String found";
    } else {
        cout<<"String not found";
    }

    return 0;
}