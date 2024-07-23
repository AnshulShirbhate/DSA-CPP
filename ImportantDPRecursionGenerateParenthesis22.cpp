#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<stack>
using namespace std;

bool isValidParenthesis(string s){
        stack<char> st;

        for(int i=0; i<s.length(); i++){
            if(s[i] == '('){
                st.push(s[i]);
            }else{
                if(st.empty())return false;
                if(s[i] == ')' && st.top() != '(')return false;
                st.pop();
            }
        }

        return st.empty();
    }

    void permute(string s, int index, vector<string> &ans, unordered_map<string,string> &mp){
        if(index >= s.length()){
            if(isValidParenthesis(s)){
                if(mp.find(s) == mp.end()){
                    ans.push_back(s);
                    mp[s] = s;
                }
            }
            return;
        }

        for(int j=index; j<s.length(); j++){
            swap(s[index], s[j]);
            permute(s, index + 1, ans, mp);
            swap(s[index], s[j]);
        }
    }

    vector<string> generateParenthesis(int n) {
        string s;
        for(int i=0; i<n*2; i++){
            if(i<n){
                s.push_back('(');
            } else{
                s.push_back(')');
            }
        }

        vector<string> ans;
        int index = 0;
        unordered_map<string, string> mp;
        permute(s, index, ans, mp);

        return ans;
    }

int main(){
    int n = 4;
    vector<string> ans = generateParenthesis(n);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}