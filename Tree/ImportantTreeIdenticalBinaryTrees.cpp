#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * left;
    Node * right;

    Node(int data){
        this -> data = data;
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

bool identicalTrees(Node* root1, Node* root2) {
    if(root1 == NULL && root2 == NULL){
        return true;
    }	 

    if(root1 == NULL && root2 != NULL){
        return false;
    }
    if(root1 != NULL && root2 == NULL){
        return false;
    }

    bool left = identicalTrees(root1->left, root2->left);
    bool right = identicalTrees(root1->right, root2 -> right);

    bool value = root1->data == root2->data;

    if(left && right && value){
        return true;
    }else{
        return false;
    }
}

int main(){
    Node * root1 = NULL;
    Node * root2 = NULL;
    root1 = buildTree(root1);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    root2 = buildTree(root2);
    cout<<identicalTrees(root1, root2);
}