#include<iostream>
#include<vector>
#include<queue>
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

void leftPart(Node*root, vector<int> &ans){

    if(root == NULL || root -> left == NULL && root -> right == NULL){
        return;
    }
    ans.push_back(root -> data);
    if(root -> left){
        leftPart(root -> left, ans);
    }else{
        leftPart(root -> right, ans);
    } 
}

void leafPart(Node *root, vector<int> &ans){
    if(root == NULL){
        return;
    }
    if(root -> left == NULL && root -> right == NULL){
        ans.push_back(root -> data);
    }
    leafPart(root -> left, ans);
    leafPart(root -> right, ans);
}

void rightPart(Node *root, vector<int> &ans){
    if(root == NULL || root -> left == NULL && root -> right == NULL){
        return;
    }
    if(root -> right){
        rightPart(root -> right, ans);
    }else{
        rightPart(root -> left, ans);
    }
    ans.push_back(root -> data);
}

vector<int> boundaryTraversal(Node *root)
{
    vector<int> ans;
    if(root == NULL){
        return ans;
    }
    ans.push_back(root -> data);
    leftPart(root -> left, ans);
    leafPart(root -> left, ans);
    leafPart(root -> right, ans);
    rightPart(root->right, ans);
    return ans;
}

Node * buildTree(Node * root){
    cout<<"Enter data for node: ";
    int data;
    cin>>data;

    if(data == -1){
        return NULL;
    }

    root = new Node(data);

    cout<<"\nEnter data for left of "<<data<<": "<<endl;
    root -> left = buildTree(root -> left);
    
    cout<<"\nEnter data for right of "<<data<<": "<<endl;
    root -> right = buildTree(root -> right);

    return root;
}

void preorder(Node * root){
    if(root == NULL){
        return;
    }
    cout<<root -> data<<" ";
    preorder(root -> left);
    preorder(root -> right);
}

int main(){
    // 1 2 3 -1 -1 4 -1 -1 5 6 -1 -1 7 -1 -1
    Node * root = NULL;
    root = buildTree( root );
    // preorder(root);
    vector<int> ans = boundaryTraversal(root);
    for(int i: ans){
        cout<<i<<" ";
    }
}