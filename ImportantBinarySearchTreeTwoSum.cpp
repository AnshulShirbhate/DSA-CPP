#include<bits/stdc++.h>
using namespace std;

void hydrate(BinaryTreeNode<int> * root, vector<int>& arr){
    if(root == NULL){
        return;
    }

    hydrate(root->left, arr);
    arr.push_back(root->data);
    hydrate(root->right, arr);
}

bool twoSumInBST(BinaryTreeNode<int>* root, int target){
	vector<int> arr;
    hydrate(root, arr);
    int left=0, right=arr.size()-1;
    while(left<right){
        int sum = arr[left] + arr[right];
        if(sum == target){
            return true;
        } else if(sum>target){
            right--;
        } else {
            left++;
        }
    }
    return false;
}