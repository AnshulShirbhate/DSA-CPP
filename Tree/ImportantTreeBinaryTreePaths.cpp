#include<iostream>
#include<vector>
#include<string>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode * left;
    TreeNode * right;

    TreeNode(int val){
        this -> val = val;
        this -> left = NULL;
        this -> right = NULL;
    }
};

TreeNode * buildTree(TreeNode * root){
    cout<<"Enter data for node: "<<endl;
    int val;
    cin>>val;

    if(val == -1){
        return NULL;
    }

    root = new TreeNode(val);

    cout<<"Enter data for left of "<<val<<endl;
    root -> left = buildTree(root -> left);
    
    cout<<"Enter data for right of "<<val<<endl;
    root -> right = buildTree(root -> right);

    return root;
}


void dfs(TreeNode *root, vector<string> &ans, string path)
{
    if (root->left == nullptr && root->right == nullptr)
    {
        path += to_string(root->val);
        ans.push_back(path);
        path.pop_back();
        return;
    }

    path += to_string(root->val);
    path += "->";

    if (root->left != nullptr)
    {
        dfs(root->left, ans, path);
    }
    if (root->right != nullptr)
    {
        dfs(root->right, ans, path);
    }

    path.pop_back();
    path.pop_back();
}

vector<string> binaryTreePaths(TreeNode *root)
{
    vector<string> ans;
    string path = "";
    dfs(root, ans, path);
    return ans;
}

int main(){
    TreeNode * root = NULL;
    // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
    root = buildTree(root);
    vector<string> ans = binaryTreePaths(root);
    cout<<endl<<"The paths to leaf nodes are: "<<endl;
    for(int i=0; i<ans.size(); i++){
        cout<<i+1<<". "<<ans[i]<<endl;
    }
}