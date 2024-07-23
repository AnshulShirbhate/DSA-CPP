#include<bits/stdc++.h>
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


void levelOrderTraversal(Node * root){
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node * temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout<<temp -> data<<" ";
            if(temp -> left){
                q.push(temp -> left);
            }

            if(temp -> right){
                q.push(temp -> right);
            }
        }
    } 
}


Node * insertIntoBst(Node * root, int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    }

    if(data>root->data){
        root->right=insertIntoBst(root->right, data);
    } else{
        root -> left = insertIntoBst(root -> left, data);
    }

    return root;
}

void createBst(Node * &root){
    cout<<"Enter the data for root node: "<<endl;
    int data;
    cin>>data;
    if(data != -1){
        while(data != -1){
            root = insertIntoBst(root, data);
            cin>>data;
        }
    }
}


void kthSmallestElement(Node * root, int &ans, int &count, int k){
    if(root == NULL){
        return;
    }
    kthSmallestElement(root->left, ans, count, k);
    count++;
    if(count == k){
        ans = root -> data;
        return;
    }
    kthSmallestElement(root->right, ans, count, k);
}


int main(){
    Node * root = NULL;
    // buildFromLevelOrderTraversal(root);
    createBst(root);
    int k = 3;
    int ans = 0;
    int count=0;
    kthSmallestElement(root, ans, count, k);
    cout<<ans;
}