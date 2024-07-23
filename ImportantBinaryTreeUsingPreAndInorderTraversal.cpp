#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * left;
    Node * right;

    Node(int data){
        this->data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};

Node * createTree(){

    int data;
    cin>>data;

    if(data == -1){
        return NULL;
    }

    Node * root = new Node(data);
    
    root -> left = createTree();
    root -> right = createTree();

    return root;
}

void inOrder(Node * root){
    if(root == NULL){
        return;
    }

    inOrder(root->left);
    cout<<root->data;
    inOrder(root->right);
}

int main(){
    // 1 2 3 -1 4 -1 -1 -1 5 6 -1 -1 7 -1 -1
    Node * root = createTree();
    inOrder(root);
}
