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
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        return solve(root, targetSum, 0);
    }
private:
    bool solve(TreeNode *root, int t, int sum){
        if(root == NULL){
            return false;
        }
        if(root ->left == NULL && root -> right == NULL){
            sum += root -> val;
            if(sum == t){
                return true;
            }
            return false;
        }
        return solve(root->left,t,sum+root -> val) || solve(root -> right, t, sum + root->val);
    }
};