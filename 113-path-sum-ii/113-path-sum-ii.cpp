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
    void solve(TreeNode *root, vector<int>store, vector<vector<int>>&ans,int targetSum){
    if(root==NULL){
        return;
    }
    store.push_back(root->val);
    targetSum-=root->val;
    if(root->left==NULL && root->right==NULL && targetSum==0){
        ans.push_back(store);
    }
    solve(root->left,store,ans,targetSum);
    solve(root->right,store,ans,targetSum);
}

vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
    vector<vector<int>>ans;
    if(root==NULL){
        return ans;
    }
    vector<int>store;
    solve(root,store,ans,targetSum);
    return ans;
}
};