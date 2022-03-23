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
    ListNode *detectCycle(ListNode *head) {
        struct ListNode *slow = head;
        struct ListNode *fast = head;
        int loop = 0;
        while(slow && fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                loop = 1;
                break;
            }
        }
        if(loop){
            slow = head;
            while(slow != fast){
                fast = fast -> next;
                slow = slow -> next;
            }
            return slow;
        }
        return NULL;
    }
};