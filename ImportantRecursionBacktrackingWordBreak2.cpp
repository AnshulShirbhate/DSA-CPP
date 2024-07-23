// Leetcode 140

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(int i, string &currSen, string s, vector<string> &ans, unordered_set<string> st){
        if(i>=s.length()){
            ans.push_back(currSen);
        }
        for(int j=i; j<s.length(); j++){
            string tempWord = s.substr(i, j-i+1);
            if(st.count(tempWord)){
                string currSenStored = currSen;
                if(currSen == ""){
                    currSen += tempWord; // Take temp word and explore
                }else{
                    currSen += " " + tempWord; // Take temp word and explore
                }
                solve(j+1,currSen,s, ans, st);
                currSen = currSenStored; // Remove temp word;
            }
        }
    }

    // vector<string> solve(string &s, unordered_set<string>& st){
    //     if(s.empty()){
    //         return {""};
    //     }

    //     vector<string> result;
    //     for(int l=1; l<=s.size(); l++){
    //         string currWord = s.substr(0, l);
    //         if(st.count(currWord)){
    //             string remainString = s.substr(l);
    //             vector<string> remainResult = solve(remainString, st);
    //             for(string & word: remainResult){
    //                 string toAdd = currWord + (word.empty()? "" : " ") + word;
    //                 result.push_back(toAdd);
    //             }
    //         }
    //     }

    //     return result;
    // }

    vector<string> wordBreak(string s, vector<string>& wordDict) {
        vector<string> result;
        unordered_set<string> st;
        for(string &word: wordDict){
            st.insert(word);
        }
        string currSen = "";
        solve(0, currSen, s, result, st);
        return result;

        // unordered_set<string> st;
        // for(string &word: wordDict){
        //     st.insert(word);
        // }
        // return solve(s, st);
    }
};

int main(){
    //s = "catsanddog", wordDict = ["cat","cats","and","sand","dog"]
    string s = "catsanddog";
    vector<string> wordDict = {"cat","cats","and","sand","dog"};
    Solution obj = Solution();
    vector<string> ans = obj.wordBreak(s, wordDict);
    for(string str: ans){
        cout<<str<<endl;
    }
}