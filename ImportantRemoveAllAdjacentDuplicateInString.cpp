#include<bits/stdc++.h>
using namespace std;


//My Solution (Beats 13% in time)
// string removeDuplicates(string s) {
//         int outOfSize = s.length()-1;
//         int i=0;
//         // while(outOfSize < s.length() && s.length() >= 1){
//         //     if(s[i] == s[i+1]){
//         //         s.erase(i, 2);
//         //         ((outOfSize - 1) < 0? outOfSize=0 : --outOfSize);
                
//         //         ((i-1) < 0? i=0: --i );
                
//         //     }else{
//         //         i++;
//         //         outOfSize++;
//         //     }    
//         // }

//         while(s.length()>1 && outOfSize>1){
//             if(s[i] == s[i+1]){
//                 s.erase(i, 2);
//                 continue;
//             }
//             i++;
//             outOfSize--;
//         }
//         return s;
// }

string removeDuplicates(string &s, unordered_set<char> st){
    int i=0;
    for(auto chars: st){
        string tempSubstr = string() + chars + chars;
        while(s.find(tempSubstr) != string::npos){
            auto i = s.find(tempSubstr);
            s.erase(i, 2);
            i++;
        }
        i++;
    }
    cout<<i<<endl;
    return s;
}

int main(){
    string s = "cchaiisshsjj";//"aabbaabsbaa";
    unordered_set<char> st;
    for(char ch: s){
        st.insert(ch);
    }
    cout<<removeDuplicates(s, st);
}