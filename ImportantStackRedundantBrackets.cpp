#include<iostream>
#include<stack>
using namespace std;

bool findRedundantBrackets(string &s){
    stack<char> st;

    for (int i = 0; i < s.size(); i++) {
        if(s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
            st.push(s[i]);
        }else{
            if(s[i] == ')'){
                bool redundant = true;
                while(st.top() != '('){
                    if(st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/'){
                        redundant = false;
                    }
                    st.pop();
                }
                if(redundant){
                    return true;
                }else{
                    st.pop();
                }
            }
        }
    } 
    return false;
}

int main(){
    string str = "((a+b) * b)";
    cout<<findRedundantBrackets(str);
}