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
void inOrder(TreeNode* root, vector<int>& order) {
    TreeNode* temp = root;
    if(temp == NULL)
        return;
    inOrder(temp->left,order);
    order.push_back(temp->val);
    inOrder(temp->right,order);
}
public:
vector<int> inorderTraversal(TreeNode* root) {
    vector<int> order;
    inOrder(root,order);
    return order;
}
};
