
TreeNode * createBST(vector<int> &preOrder, int min, int max, int &i){
    
    if(i >= preOrder.size()){
        return NULL;
    }
    if(preOrder[i] < min || preOrder[i] > max){
        return NULL;
    }

    TreeNode * root = new TreeNode(preOrder[i++]);
    root->left = createBST(preOrder, min, root->data, i);
    root->right = createBST(preOrder, root->data, max, i);
    
    return root;
}

TreeNode *preOrderTree(vector<int> &preOrder)
{   
    int i=0;
    return createBST(preOrder, INT_MIN, INT_MAX, i);
}