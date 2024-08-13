#include<iostream>
#include<cmath>
using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     // Number of digits
//     int k = log10(n)+1;

//     // Divide number by 10 to power number of digits-1 Ex: 1551, k = 4, 10^3=1000, 1551/1000 = 1 = ans;
//     int ans = n/pow(10,k);
//     cout<<ans;
// }

int sumLongestPath(Node * root, int th, &lh, int &ans){
    if(root == NULL){
        if(th>lh){
            ans = ans;
        }
        return 0;
    }

    int left = sumLongestPath(root->left, th+1, lh, ans+root->data);
    int right = sumLongestPath(root->right, th+1, lh, ans+root->data);

    return ans;
}