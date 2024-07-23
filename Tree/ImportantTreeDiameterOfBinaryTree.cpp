#include<iostream>
#include<queue>
#include<utility>
#include<algorithm>
using namespace std;

class TreeNode{
    public:
        int data;
        TreeNode * left;
        TreeNode * right;
    
    TreeNode(int data){
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};

TreeNode * buildTree(TreeNode * root){
    cout<<"Enter data for Node: "<<endl;
    int data;
    cin>>data;

    if(data == -1){
        return NULL;
    }

    root = new TreeNode(data);
    
    
    cout<<"Enter data for inserting in left of "<<data<<endl;
    // This call is for inserting in the left of all nodes.
    root -> left = buildTree(root->left);
    
    // This call is for inserting in the right of all nodes. It gets executed after there is no left nodes are left to fill.
    cout<<"Enter data for inserting in right of "<<data<<endl;
    root -> right = buildTree(root->right);
    return root;
}

int heightOfBinaryTree(TreeNode *root)
{
	if(root == NULL){
        return 0;
    }

    int left = heightOfBinaryTree(root -> left);
    int right = heightOfBinaryTree(root -> right);

    int ans = max(left, right)+ 1;
    return ans;
}


// Not Optimal approach
// int diameterOfTree(TreeNode * root){
//     if(root == NULL){
//         return 0;
//     }

//     int op1 = diameterOfTree(root -> left);
//     int op2 = diameterOfTree(root -> right);
//     int op3 = heightOfBinaryTree(root -> left) + 1 + heightOfBinaryTree(root -> right);

//     int ans = max(op1, max(op2, op3));
//     return ans;
// }


//Optimal Approach
pair<int, int> diameterOfTree(TreeNode * root){
    if(root == NULL){
        pair<int, int> p = make_pair(0, 0);
        return p;
    }
    pair<int, int> left = diameterOfTree(root -> left);
    pair<int, int> right = diameterOfTree(root -> right);

    int op1 = left.first;
    int op2 = right.first;
    int op3 = left.second + right.second + 1;

    pair<int, int> ans;
    ans.first = max(op1, max(op2, op3));
    ans.second = max(left.second, right.second) + 1;
    return ans;
}

void levelOrderTraversal(TreeNode * root){
    queue<TreeNode *> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        TreeNode * temp = q.front();
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

int main(){
    TreeNode * root = NULL;
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    levelOrderTraversal(root);
    cout<<endl;
    int ans = diameterOfTree(root).first;
    cout<<"Diameter of the tree: "<<ans;
}