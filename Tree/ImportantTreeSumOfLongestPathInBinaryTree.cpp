#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node * left;
        Node * right;
    
    Node(int data){
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};

Node * buildTree(Node * root){
    cout<<"Enter data for Node: "<<endl;
    int data;
    cin>>data;

    if(data == -1){
        return NULL;
    }

    root = new Node(data);
    
    
    cout<<"Enter data for inserting in left of "<<data<<endl;
    // This call is for inserting in the left of all nodes.
    root -> left = buildTree(root->left);
    
    // This call is for inserting in the right of all nodes. It gets executed after there is no left nodes are left to fill.
    cout<<"Enter data for inserting in right of "<<data<<endl;
    root -> right = buildTree(root->right);
    return root;
}


void sumOfLongestPath(Node * root, int len, int &maxLen, int sum, int &maxSum){
    if(root == NULL){
        if(len > maxLen){
            maxLen = len;
            maxSum = sum;
        } else if(len == maxLen){
            maxSum = sum;
        }
        return;
    }

    sum = sum + root -> data;

    sumOfLongestPath(root->left, len+1, maxLen, sum, maxSum);
    sumOfLongestPath(root->right, len+1, maxLen, sum, maxSum);
        
}

int main(){
    Node * root = NULL;
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    int len=0;
    int maxLen = 0;
    int sum = 0;
    int maxSum = 0;

    sumOfLongestPath(root, len, maxLen, sum, maxSum);
    cout<<maxSum;
    
}