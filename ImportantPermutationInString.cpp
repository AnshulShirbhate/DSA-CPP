#include<iostream>
#include<string>
using namespace std;

bool checkEqual(int a[26], int b[26]){
    for(int i=0; i<26; i++){
        if(a[i] != b[i]){
            return 0;
        }
    }
    return 1;
}

// bool checkInclusion(string s1, string s2){
//     int count[26] = {0};
//     for(int i=0; i<s1.length(); i++){
//         int index = s1[i] - 'a';
//         count[index]++;
//     }


//     int i=0;
//     int windowSize = s1.length();
//     int count2[26] = {0};

//     while(i<windowSize && i<s2.length()){
//         int index = s2[i] - 'a';
//         count2[index]++;
//         i++;
//     }

//     if(checkEqual(count, count2)){
//         return 1;
//     }

//     while(i<s2.length()){
//         char newChar = s2[i];
//         int index = newChar -'a';
//         count2[index]++;

//         char oldChar = s2[i-windowSize];
//         index = oldChar - 'a';
//         count2[index]--;

//         i++;
//         if(checkEqual(count, count2)){
//             return 1;
//         }
//     }
//     return 0;
// }

bool checkInclusion(string s1, string s2){
    int i=0;
    int count1[26] = {0};

    while(i<s1.size()){
        int index = s1[i] - 'a';
        count1[index]++;
        i++;
    }
    i=0;
    int windowSize = s1.size();
    int count2[26] = {0};

    while(i<windowSize && i<s2.size()){
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }

    if(checkEqual(count1, count2)){
        return 1;
    }

    while(i<s2.size()){
        int index = s2[i] - 'a';
        count2[index]++;

        char oldChar = s2[i-windowSize];
        index = oldChar - 'a';
        count2[index]--;
        i++;

        if(checkEqual(count1, count2)){
            return 1;
        }
    }
    return 0;

}


int main(){
    string s1 = "ab", s2 = "bchdbas";
    cout<<(checkInclusion(s1, s2)? "Permutation Found" : "Permutation Not Found");
}