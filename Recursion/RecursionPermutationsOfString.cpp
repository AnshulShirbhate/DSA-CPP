#include<iostream>
#include<vector>
using namespace std;

void permute(string &s1, int size, vector<string> &permutations, int index){
    if(index >= size){
        permutations.push_back(s1);
        return;
    }

    for(int i=index; i<size; i++){
        swap(s1[i], s1[index]);
        permute(s1, size, permutations, index+1);
        //backtrack
        swap(s1[i], s1[index]);
    }
}

int main(){
    string s1="Anshul";
    vector<string> permutations;
    permute(s1, s1.length(), permutations, 0);
    // for(string i:permutations){
    //     cout<<i<<" ";
    // }
    cout<<permutations[0];
}