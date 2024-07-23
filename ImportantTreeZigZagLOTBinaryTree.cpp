///Lecture 64 love babbar c++ placement course

vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root == NULL){
            return result;
        }
        queue<TreeNode *> q;
        q.push(root);

        bool lTr = true;

        while(!q.empty()){
            int size = q.size();
            vector<int> ans(size);

            for(int i=0; i<size; i++){
                TreeNode * frontNode = q.front();
                q.pop();

                int index = (lTr? i: size-i-1);
                ans[index] = frontNode -> val;

                if(frontNode -> left){
                    q.push(frontNode->left);
                }
                if(frontNode -> right){
                    q.push(frontNode->right);
                }
            }
            lTr = !lTr;
            result.push_back(ans);
        }
        return result;
    }