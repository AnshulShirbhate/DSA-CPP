bool check(Node * root, int d, int level){
        if (root == NULL)
        return true;

        // If leaf node, then its depth must be same as
        // depth of all other leaves.
        if (root->left == NULL && root->right == NULL)
            return (d == level+1);
    
        // If internal node and one child is empty
        if (root->left == NULL || root->right == NULL)
            return false;
    
        // Left and right subtrees must be perfect.
        return check(root->left, d, level+1) &&
               check(root->right, d, level+1);
        
    }
    int depthh(Node * node){
        if(node == NULL){
            return 0;
        }
        
        int left = 1+ depthh(node->left);
        return left;
        // int d = 0;
        // while (node != NULL)
        // {
        //     d++;
        //     node = node->left;
        // }
        // return d;
    }
    
    bool isPerfect(Node *root)
    {   
        int depth=depthh(root);
        return check(root, depth, 0);
    }