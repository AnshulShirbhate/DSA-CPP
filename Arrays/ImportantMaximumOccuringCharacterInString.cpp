#include<iostream>
#include<string>
using namespace std;

char maximumOccuringCharacter(string s){
    // int arr[26] = {0};
    
    // for(int i=0; i<s.length(); i++){
    //     int number = 0;
    //     number = s[i] - 'a';
    //     arr[number] = arr[number] + 1;
    // }

    // int max=-1, ans = 0;
    // for(int i=0; i<26; i++){
    //     if(max < arr[i]){
    //         max = arr[i];
    //         ans = i;
    //     }
    // }
    // char ch = ans + 'a';
    // return ch;

    int chars[26] = {0};

    for(int i=0; i<s.size(); i++){
        int charNum = s[i]-'a';
        chars[charNum]++;
    }
    int max=0;
    int ans;
    for(int i=0;i<26; i++){
        if(chars[i]>max){
            max=chars[i];
            ans=i;
        }
    }
    return 'a'+ans;
}

int main(){
    string s;
    cin>>s;
    cout<<maximumOccuringCharacter(s);
}