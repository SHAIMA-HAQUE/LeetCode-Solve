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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root == nullptr){
            return result;
        }
        queue<TreeNode *> queue;
        queue.push(root);
        bool leftToRight = true;
        while(!queue.empty()){
            int levelSize = queue.size();
            vector<int> currentLevel(levelSize);
            for(int i =0;i<levelSize;i++){
                TreeNode *currentNode = queue.front();
                queue.pop();
                if(leftToRight){
                    currentLevel[i] = currentNode->val;
                }else{
                    currentLevel[levelSize - i - 1] = currentNode -> val;
                }
                if(currentNode -> left != nullptr){
                    queue.push(currentNode -> left);
                }
                if(currentNode -> right != nullptr){
                    queue.push(currentNode -> right);
                }
            }
            result.push_back(currentLevel);
            leftToRight = !leftToRight;
        }
        return result;
        
    }
};