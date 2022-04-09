/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*, bool> cycle;
        ListNode *temp = head;
        while(temp!= NULL){
            //temp already exists
            if(cycle.count(temp) != 0){
                return true;
            }
            cycle[temp] = true;
            temp = temp -> next;
        }
        return false;
    }
};