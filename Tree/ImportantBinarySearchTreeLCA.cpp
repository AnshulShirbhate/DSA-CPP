#include<iostream>
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


Node * LCA(Node * root, int node1, int node2){
    if(root == NULL){
        return NULL;
    }

    if(root->data < node1 && root->data < node2){
        return LCA(root->right, node1, node2);
    }
    if(root->data > node1 && root->data > node2){
        return LCA(root->left, node1, node2);
    }
    return root;
}

int main(){
    Node * root = NULL;

    createBst(root);
    /*      10
    7            15
6       9     12       16
1            11  13
    */
    levelOrderTraversal(root);
    Node* lca = LCA(root, 13, 16);
    cout<<endl<<lca->data;
}