// Leetcode 648

#include <bits/stdc++.h>
using namespace std;

string findroot(string word, unordered_set<string> st)
{
    for (int i = 1; i < word.length(); i++)
    {
        string root = word.substr(0, i);
        if (st.count(root))
        {
            return root;
        }
    }
    return word;
}
string replaceWords(vector<string> &dictionary, string sentence)
{
    unordered_set<string> st(begin(dictionary), end(dictionary));

    stringstream ss(sentence);

    string word;

    string result;
    while (getline(ss, word, ' '))
    {
        result += findroot(word, st) + " ";
    }
    result.pop_back();
    return result;
}

int main()
{
    vector<string> dictionary = {"cat", "bat", "rat"};
    string sentence = "the cattle was rattled by the battery";
    cout << replaceWords(dictionary, sentence);
}
