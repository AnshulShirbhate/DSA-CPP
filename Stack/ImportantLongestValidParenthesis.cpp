// https://youtu.be/qC5DGX0CPFA?si=l_7skS5X90xLgQ1-

#include<iostream>
#include<stack>
#include<string>
using namespace std;

int longestValidParentheses(string s) {
        if(s.length() == 0 || s.length() == 1){
            return 0;
        }
        stack<char> st;
        stack<int> index;
        index.push(-1);
        int count = 0;
        for(int i = 0; i<s.length(); i++){
            if(s[i] == '('){
                st.push(s[i]);
                index.push(i);
            } else {
                if(!st.empty() && st.top() == '('){
                    st.pop();
                    index.pop();
                    count = max(count, i-index.top());
                }else{
                    index.push(i);
                }
            }
        }
        return count;
    }

int main(){
    string s = ")())(())";
    cout<<longestValidParentheses(s);
}