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
    int maxDepth(TreeNode* root) {
        int maxdepth = 0;
        if(root == nullptr){
            return maxdepth;
        }
        queue<TreeNode *> queue;
        queue.push(root);
        
        while(!queue.empty()){
            int levelSize = queue.size();
            maxdepth++;
            for(int i = 0;i<levelSize;i++){
                TreeNode *currentNode = queue.front();
                queue.pop();
                if(currentNode -> left != nullptr){
                    queue.push(currentNode -> left);
                }
                if(currentNode -> right != nullptr){
                    queue.push(currentNode -> right);
                }
            }
        }
        return maxdepth;
    }
};