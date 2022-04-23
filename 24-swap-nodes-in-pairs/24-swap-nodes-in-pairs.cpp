/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode *temp;
        if(head == NULL){
            return NULL;
        }else if(head->next == NULL) {
           return head;
        }else{
            temp = head->next;
            head->next = temp->next;
            temp->next = head;
            head = temp;
        }
        head -> next ->next = swapPairs(head->next->next);
        return head;
    }
};