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
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int> map;
        return solve(root, k, map);
    }

    bool solve(TreeNode *root, int k, unordered_set<int> &map){
        if(root == nullptr){
            return false;
        }
        if(map.count(k- root->val)){
            return true;
        }
        map.insert(root -> val);
        return solve(root->left, k,map) || solve(root -> right, k, map);
    }
};