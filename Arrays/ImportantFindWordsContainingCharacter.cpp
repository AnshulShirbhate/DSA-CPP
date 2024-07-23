#include<iostream>
#include<vector>
#include<string>
using namespace std;

// vector<int> findWordsContaining(vector<string>& words, char x) {
//         vector<int> ans;
//         for(int i=0; i<words.size(); i++){
//             for(int j=0; j<words[i].length(); j++){
//                 if(words[i][j] == x){
//                     ans.push_back(i);
//                     break;
//                 }
//             }
//         }
//         return ans;
// }

vector<int> findWordsContaining(vector<string> &words, char x){
    vector<int> ans;
    for(int i=0; i<words.size(); i++){
        if(words[i].find(x)){
            ans.push_back(i);
            continue;
        }
    }
    return ans;
}

int main(){
    vector<string> words = { "leet", "code" };
    vector<int> ans = findWordsContaining(words, 'e');
    for(int i: ans){
        cout<<i<<" "; 
    }
}

