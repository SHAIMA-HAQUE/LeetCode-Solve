/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root == nullptr){
            return root;
        }
        queue<Node *> queue;
        queue.push(root);
        while(!queue.empty()){
            Node *prevNode = nullptr;
            int levelSize = queue.size();
            for(int i = 0;i<levelSize;i++){
                Node *currentNode = queue.front();
                queue.pop();
                if(prevNode != nullptr){
                   prevNode -> next = currentNode;
                }
                prevNode = currentNode;
                if(currentNode -> left != nullptr){
                    queue.push(currentNode -> left);
                }
                if(currentNode -> right != nullptr){
                    queue.push(currentNode -> right);
                }
            }
            
        }
        return root;
    }
};