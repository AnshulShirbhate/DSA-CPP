BinaryTreeNode<int>* LCA(BinaryTreeNode<int>* root, int n1, int n2) {
    if (root == NULL) {
        return NULL;
    }

    if (root->data == n1 || root->data == n2) {
        return root;
    }

    BinaryTreeNode<int>* left = LCA(root->left, n1, n2);
    BinaryTreeNode<int>* right = LCA(root->right, n1, n2);

    if (left && right) {
        return root;
    } else if (left != NULL) {
        return left;
    } else {
        return right; 
    }
}