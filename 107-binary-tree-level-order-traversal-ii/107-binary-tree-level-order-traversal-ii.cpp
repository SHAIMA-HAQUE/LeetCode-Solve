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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> result = vector<vector<int>>();
        if(root == nullptr){
            return result;
        }
        queue<TreeNode *> queue;
        queue.push(root);
        while(!queue.empty()){
            int levelSize = queue.size();
            vector<int> currentLevel;
            for(int i = 0;i<levelSize;i++){
                TreeNode *currentNode = queue.front();
                queue.pop();
                
                currentLevel.push_back(currentNode -> val);
                
                if(currentNode -> left != nullptr){
                    queue.push(currentNode->left);
                }
                if(currentNode -> right != nullptr){
                    queue.push(currentNode->right);
                }
            }
           result.push_back(currentLevel);
          
        }
         reverse(result.begin(), result.end());
        return result;
    }
};