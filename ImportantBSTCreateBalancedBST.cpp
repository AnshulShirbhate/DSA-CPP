void hydrate(TreeNode<int> * root, vector<int>& arr){
    if(root == NULL){
        return;
    }

    hydrate(root->left, arr);
    arr.push_back(root->data);
    hydrate(root->right, arr);
}

TreeNode<int> * balancedBST(int s, int e, vector<int> arr){
    if(s>e){
        return NULL;
    }

    int mid = (s+e)/2;
    TreeNode<int> * root = new TreeNode<int>(arr[mid]);
    root->left = balancedBST(s, mid-1, arr);
    root->right = balancedBST(mid+1, e, arr);
    return root;
}

TreeNode<int>* balancedBst(TreeNode<int>* root) {
    // Write your code here.
    vector<int> arr;
    hydrate(root, arr);
    return balancedBST(0, arr.size()-1, arr);
}