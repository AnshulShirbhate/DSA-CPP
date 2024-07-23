#include<bits/stdc++.h>
using namespace std;

bool searchInBST(BinaryTreeNode<int> *root, int x) {
    //Recursive approach

    // if(root == NULL){
    //     return false;
    // }
    // if(root->data == x){
    //     return true;
    // }
    
    // if(root -> data > x){
    //     searchInBST(root->left,  x);
    // }else{
    //     searchInBST(root->right, x);
    // }


    //Iterative approach

    BinaryTreeNode<int> * temp = root;

    while(temp != NULL){
      if (temp->data == x) {
        return true;
      } else if (temp->data > x){
          temp = temp -> left;
      } else{
          temp = temp -> right;
      }
    }
    return false;

}