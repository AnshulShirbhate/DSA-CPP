// This algorithm is used to find the prime numbers in a range in lesser time complexity compared to brute force.
// Time complexity of this algrithm is O(N log log N)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    vector<int> ans;

    vector<bool> prime(n, true);

    for(int i=2; i<n; i++){
        if(prime[i]){
            ans.push_back(i);
            for(int j=i*2; j<n; j+=i){
                prime[j]=false;
            }
        }
    }

    cout<<"The prime numbers in range "<<n<<" are: "<<endl;
    for(int i: ans){
        cout<<i<<" ";
    }

}