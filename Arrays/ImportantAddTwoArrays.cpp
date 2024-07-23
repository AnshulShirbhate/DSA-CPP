// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> reverse(vector<int> vec){
//     int s=0, e=vec.size()-1;
//     while(s<e){
//         swap(vec[s++], vec[e--]);
//     }
//     return vec;
// }

// vector<int> Sum(vector<int> v1, vector<int> v2){
//     int i=v1.size()-1, j = v2.size()-1;
//     int carry = 0;
//     vector<int> ans;
//     while(i>=0 && j>=0){
//         int sum = v1[i] + v2[j] + carry;
//         carry = sum/10;
//         sum = sum%10;
//         ans.push_back(sum);
//         i--;
//         j--;
//     }

//     // First case if first array is greater in size
//     while(i>=0){
//         int sum = v1[i] + carry;
//         carry = sum/10;
//         sum = sum%10;
//         ans.push_back(sum);
//         i--;
//     }


//     //Second case if left array is greater in size
//     while(j>=0){
//         int sum = v2[j] + carry;
//         carry = sum/10;
//         sum = sum%10;
//         ans.push_back(sum);
//         j--;
//     }

//     //Third case if carry is remaining
//     while(carry != 0){
//         int sum = carry;
//         carry = sum/10;
//         sum = sum%10;
//         ans.push_back(sum);
//     }

//     return reverse(ans);
// }

// int main(){
//     vector<int> v1 = {1, 2, 3, 4};
//     vector<int> v2 = {9, 7, 4, 6};
//     vector<int> ans = Sum(v1, v2);
//     for(auto i:ans){
//         cout<<i;
//     }
// }


#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

vector<int> Sum(vector<int> first, vector<int> second){
    vector<int> ans;
    int flen = first.size()-1;
    int slen = second.size()-1;
    int carry = 0;
    while(flen >=0 && slen >= 0){
        int sum = first[flen] + second[slen] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        flen--;
        slen--;
    }

    while(flen >=0){
        int sum = first[flen] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        flen--;
    }

    while(slen >=0){
        int sum = second[slen] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        slen--;
    }

    if(carry == 1){
        ans.push_back(carry);
    }
    reverse(ans.begin(), ans.end());
    return ans;

}

int main(){
    vector<int> v1 = {1, 2, 3, 4, 7, 8};
    vector<int> v2 = {};
    vector<int> ans = Sum(v1, v2);
    for(int i: ans){
        cout<<i<<" ";
    }
}