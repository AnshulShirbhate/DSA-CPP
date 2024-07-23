/*
    Tree Terminologies:
    1. Node: Node is an entity that stores some data and pointers.
    2. Root Node: The starting or top node of the tree.
    3. Parent: The node which is exact one hop above the current node.
    4. Child: The nodes that are pointed by the current node in downward direction.
    5. Sibling: The nodes having the same parent.
    6. Ancestor: Every node above the current node.
    7. Descendant: Every node below the current node is pointing.
    8. Leaf: The node having no children.


    Different traversals in tree:
    1. Level Order Traversal
    2. Reverse Level Order Traversal
    3. In Order Traversal - LNR
    4. Pre-Order Traversal - NLR
    5. Post-Order Traversal - LRN
<<<<<<< HEAD
    6. Morris Traversal - LNR (Optimal)
=======
>>>>>>> 9e7864891ca8fdfe2b1ba3f2d949b526fa8404cf

*/


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


void inorder(Node * root){
    if(root == NULL){
        return;
    }

    inorder(root -> left);
    cout<<root -> data<<" ";
    inorder(root -> right);
}


void preorder(Node * root){
    if(root == NULL){
        return;
    }

    cout<<root -> data<<" ";
    preorder(root -> left);
    preorder(root -> right);
}


void postorder(Node * root){
    if(root == NULL){
        return;
    }

    postorder(root -> left);
    postorder(root -> right);
    cout<<root -> data<<" ";
}


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

int main(){
    Node * root = NULL;
    // root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    // levelOrderTraversal(root);
    // inorder(root);
    // preorder(root);
    // postorder(root);

    buildFromLevelOrderTraversal(root);
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    levelOrderTraversal(root);
}