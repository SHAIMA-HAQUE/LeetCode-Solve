/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    int height(TreeNode *root){
    if(root == NULL){
        return 0;
    }else{
        return 1+max(height(root->left), height(root -> right));
    }
}
public:
    bool isBalanced(TreeNode* root) {
        if(root == NULL){
        return true;
    }
    int left_height = height(root->left);
    int right_height = height(root -> right);
    if(abs(left_height - right_height)<=1 && isBalanced(root -> left) && isBalanced(root -> right)){
        return true;
    }
    return false;
    }
};

