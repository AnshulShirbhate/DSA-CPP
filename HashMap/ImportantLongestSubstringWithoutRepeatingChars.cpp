#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

//thisisastr
//0123456789

// int lengthOfLongestSubstring(string s) {
//         vector<int> mpp(256, -1);
//         int right=0, left=0, maxCount=0;

//         while(right < s.size()){
//             if(mpp[s[right]] != -1){
//                 left = max(mpp[s[right]] + 1, left);
//             }

//             mpp[s[right]] = right;

//             maxCount = max(maxCount, 1 + (right-left));
//             right++;
//         }

//         return maxCount;
//     }

int lengthOfLongestSubstring(string s){
    // int maxc = INT_MIN;
    // map<char, int> mpp;
    // int left=0, right=0;

    // for (int i = 0; i < s.length(); i++) {
    //     if (mpp.find(s[i]) == mpp.end() || mpp[s[i]] < left) {
    //         maxc = max(maxc, (right - left) + 1);
    //     } else {
    //         left = mpp[s[i]] + 1;
    //     }
    //     mpp[s[i]] = i;
    //     right++;
    // }
    // return maxc;

    map<char, int> mpp;
    int left=0, right=0;
    int len = 0;

    for(int i=0; i<s.length(); i++){
        if(mpp.find(s[i] == mpp.end() || mpp[s[i]] < left)){
            len = max(len, (right-left)+1);
        }else{
            left = mpp[s[i]] + 1;
        }
        mpp[s[i]] = i;
        right++;
    }
}

int main(){
    string s = "abcabcbad";
    int ans = lengthOfLongestSubstring(s);
    cout<<ans;
}