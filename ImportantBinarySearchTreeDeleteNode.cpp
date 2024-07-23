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

Node * minVal(Node * root){
    while(root -> left){
        root = root -> left;
    }
    return root;
}

Node * deleteFromBST(Node * root, int val){
    if(root == NULL){
        return root;
    }

    if(root -> data == val){
        //0 child
        if(!root -> right && !root -> left){
            delete root;
            return NULL;
        } 
        //1 child
        if(root -> left && !root->right){
            Node * temp = root -> left;
            delete root;
            return temp;
        } 
        
        if(root -> right && !root->left){
            Node * temp = root -> right;
            delete root;
            return temp;
        } 
        
        //2 child
        if(root->right && root -> left) {
            int mini = minVal(root->right)->data;
            root -> data = mini;
            root -> right = deleteFromBST(root -> right, mini);
            return root;
        }
    } else if(root -> data > val){
        root -> left = deleteFromBST(root->left, val);
        return root;
    } else {
        root -> right = deleteFromBST(root -> right, val);
        return root;
    }
}

int main(){
    Node * root = NULL;
    // buildFromLevelOrderTraversal(root);
    createBst(root);
    levelOrderTraversal(root);
    deleteFromBST(root, 45);
    levelOrderTraversal(root);

}