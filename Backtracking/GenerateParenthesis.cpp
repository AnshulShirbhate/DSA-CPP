#include <bits/stdc++.h>
using namespace std;

bool isValidParenthesis(string s)
{
    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else
        {
            if (st.empty())
                return false;
            if (s[i] == ')' && st.top() != '(')
                return false;
            st.pop();
        }
    }

    return st.empty();
}

void getAns(string s, vector<string> &ans, int n)
{
    if (s.size() == n * 2)
    {
        if (isValidParenthesis(s))
        {
            ans.push_back(s);
        }
        return;
    }

    s += '(';
    getAns(s, ans, n);
    s.pop_back();
    s += ')';
    getAns(s, ans, n);
    s.pop_back();
}

vector<string> generateParenthesis(int n)
{
    string s = "";
    vector<string> ans;
    getAns(s, ans, n);
    return ans;
}

int main()
{
    int n;
    cout << "Enter the value of N: ";
    cin >> n;
    vector<string> s = generateParenthesis(n);
    for (string i : s)
    {
        cout << i << endl;
    }
}