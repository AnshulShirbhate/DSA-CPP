// Lecture 38 https://youtu.be/tWnHbSHwNmA?si=Erqqfe56_Icl50mg of love babbar's cpp placement series.

#include<iostream>
#include<vector>
#include<string>
using namespace std;

void solve(string digits, string output, int index, vector<string> &ans, string mpp[])
{
    if (index >= digits.length())
    {
        ans.push_back(output);
        return;
    }

    int number = digits[index] - '0';
    string value = mpp[number];

    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        solve(digits, output, index + 1, ans, mpp);
        output.pop_back();
    }
}

vector<string> letterCombinations(string digits)
{
    vector<string> ans;
    if (digits.length() == 0)
    {
        return ans;
    }
    string output = "";
    int index = 0;
    string mpp[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(digits, output, index, ans, mpp);
    return ans;
}


int main(){
    string digits = "23";
    vector<string> ans = letterCombinations(digits);
    for(string i: ans){
        cout<<i<<" ";
    }
}