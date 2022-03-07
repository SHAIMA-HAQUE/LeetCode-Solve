# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:
        if root is None:
            return True
        def isMirror(left:Optional[TreeNode], right:Optional[TreeNode]):
            if left is None or right is None:
                return left == right
            if left.val != right.val:
                return False
            return isMirror(left.left, right.right) and isMirror(left.right,right.left)
        
        return isMirror(root.left, root.right)
            