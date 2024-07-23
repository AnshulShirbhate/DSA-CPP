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

void buildFromLevelOrderTraversal(Node * &root){
    queue<Node *> q;
    cout<<"Enter data for root: "<<endl;
    int data;
    cin>>data;
    root = new Node(data);
    q.push(root);

    while(!q.empty()){
        Node *temp = q.front();
        q.pop();

        cout<<"Enter left node for "<<temp -> data<<endl;
        int leftData;
        cin >>leftData;

        if(leftData != -1){
            temp -> left = new Node(leftData);
            q.push(temp->left);
        } 

        cout<<"Enter right node for "<<temp -> data<<endl;
        int rightData;
        cin >>rightData;

        if(rightData != -1){
            temp -> right = new Node(rightData);
            q.push(temp->right);
        } 
    }
}

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

int main(){
    Node * root = NULL;
    // buildFromLevelOrderTraversal(root);
    createBst(root);
    levelOrderTraversal(root);
}