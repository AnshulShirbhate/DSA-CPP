#include<iostream>
#include<vector>
#include<string>
using namespace std;

string longestCommonPrefix(vector<string> &arr, int n)
{
    // string ans = "";
    // //Traverse the first string of the vector
    // for(int i=0; i<arr[0].size(); i++){
    //         //Get hold of the ith character to check for in the next strings ith position.
    //         char ch = arr[0][i];
    //         bool check = true;
    //     //Traverse the whole vector and check if the char matches their ith character.    
    //     for (int j = 1; j < n; j++) {
    //         //If char not matching then make the check false and break.
    //         if (arr[j].size() < i || ch != arr[j][i]) {
    //             check = false;
    //             break;
    //         }
    //     }
    //     //If the check is false then break.
    //     if(!check){
    //         break;
    //     }//If check is true then push the char in the answer.
    //     else{
    //         ans.push_back(ch);
    //     }

    // }
    // return ans;

    string ans = "";
    for(int i=0; i<arr[0].size(); i++){
        bool check = true;
        for(int j=1; j<arr.size(); j++){
            if(arr[j].size() < i || arr[0][i] != arr[j][i]){
                check=false;
                break;
            }
        }
        if(check){
            ans.push_back(arr[0][i]);
        }else{
            break;
        }
    }
    return ans;
}

int main(){
    vector<string> strs = {"anshul", "answer", "analogy", "anyway"};
    string ans = longestCommonPrefix(strs, strs.size());
    cout<<ans;
}
