#include<iostream>
#include<map>
#include<vector>
using namespace std;

void sortWithFrequency(vector<int> &vec){
    map<int, int> mpp;
    vector<int> ans;
    for(int i=0; i<vec.size(); i++){
        mpp[vec[i]]++;
    }

    for(auto i=mpp.begin(); i != mpp.end(); i++){
        cout<<i->first<<" "<<i->second<<endl;
    }

    
    
}

int main(){
    vector<int> vec = {4, 6, 7, 3, 3, 1, 1, 9, 10, 6};
    sortWithFrequency(vec);
    // for(int i=0; i<vec.size(); i++){
    //     cout<<vec[i]<<" ";
    // }
}