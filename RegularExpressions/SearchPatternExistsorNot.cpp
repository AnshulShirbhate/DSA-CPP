#include<iostream> 
#include<regex>
using namespace std;

int main(){
    string a = "This is a string and keyword is to be found in this string";

    regex b("key[a-zA-Z]+");

    smatch c;

    regex_search(a, c, b);
    for(auto x: c){
        cout<<x<<" ";
    }
    return 0;
}