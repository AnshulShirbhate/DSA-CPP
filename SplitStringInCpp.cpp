#include<iostream>
#include<vector>
#include<sstream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string sentence, word;

    getline(cin, sentence);

    stringstream ss(sentence);
    vector<string> ans;
    while(getline(ss, word, ' ')){
        ans.push_back(word);
    }

    reverse(ans.begin(), ans.end());

    string reversewords;
    for(string word: ans){
        reversewords.append(word + " ");
    }

    cout<<reversewords;

}