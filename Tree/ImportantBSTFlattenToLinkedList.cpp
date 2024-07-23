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

Node* flattenToLinkedList(BinaryTreeNode<int>* root){
	vector<int> arr;
    hydrate(root, arr);
    Node * newRoot = new Node(arr[0]);
    Node * curr = newRoot;
    for(int i=1; i<arr.size(); i++){
        Node * temp = new Node(arr[i]);
        curr->left = NULL;
        curr->right = temp;

        curr = temp;
    }

    curr->right = NULL;
    curr->left = NULL;

    return newRoot;
}