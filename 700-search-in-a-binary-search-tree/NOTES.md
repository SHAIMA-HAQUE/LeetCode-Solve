​```
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* temp = root;
        if(!root){
            return root;
        }
        if(val == temp->val){
            return temp;
        }else{
            temp = searchBST(root->left, val);
            if(temp != NULL){
                return temp;
            }else{
                return searchBST(root->right, val);
            }
        }
    }
};
```
