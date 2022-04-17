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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        // TreeNode *new_node = new TreeNode(val);
        // TreeNode *temp = root;
        // new_node->val = val;
        // new_node -> left = NULL;
        // new_node -> right = NULL;
        // queue<TreeNode *> node;
        // if(!new_node){
        //     return NULL;
        // }
        // if(!root){
        //     root = new_node;
        //     return NULL;
        // }
        // node.push(root);
        // if(!node.empty()){
        //     temp = node.front();
        //     if(temp->left){
        //         node.push(temp->left);
        //     }else{
        //         temp->left = new_node;
        //         node.pop();
        //         return NULL;
        //     }
        //     if(temp -> right){
        //         node.push(temp->right);
        //     }else{
        //         temp -> right = new_node;
        //         node.pop();
        //         return NULL;
        //     }
        // }
        // return node;
        if(root==NULL)  
      {
          TreeNode* node=new TreeNode(val);  // if root become NULL
          return node;
      }
      if(root->val<val)
      {
       root->right= insertIntoBST(root->right,val) ;   // if root is less than value
      }
      else
      {
       root->left  =insertIntoBST(root->left,val);    // if root is greater than value
      }
        return root;
    }
};