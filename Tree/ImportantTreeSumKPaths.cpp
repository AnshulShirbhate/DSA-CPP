#include<iostream>
#include<vector>
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


void solve(Node * root, int &count, int k, vector<int> path){
        if(root == NULL){
            return;
        }
        path.push_back(root->data);
        solve(root -> left, count, k, path);
        solve(root -> right, count, k, path);
        
        int sum = 0;
        for(int i=path.size()-1; i>=0; i--){
            sum += path[i];
            if(sum == k){
                count++;
            }
        }
    }


int main(){
    Node * root = NULL;
    root = buildTree(root);
    int k = 20;
    vector<int> path;
    int count=0;
    solve(root, count, k, path);
    return count;
}