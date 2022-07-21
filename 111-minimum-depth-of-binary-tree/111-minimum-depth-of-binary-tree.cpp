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
    int minDepth(TreeNode* root) {
        int mindepth = 0;
        if(root == nullptr){
            return mindepth;
        }
        queue<TreeNode *> queue;
        queue.push(root);
        while(!queue.empty()){
            mindepth++;
            int levelSize = queue.size();
            for(int i = 0;i<levelSize;i++){
                TreeNode *currentNode = queue.front();
                queue.pop();
                if(currentNode -> left == nullptr && currentNode -> right == nullptr){
                    return mindepth;
                }
                if(currentNode -> left != nullptr){
                    queue.push(currentNode -> left);
                }
                if(currentNode -> right != nullptr){
                    queue.push(currentNode -> right);
                }
            }
        }
        return mindepth;
    }
};