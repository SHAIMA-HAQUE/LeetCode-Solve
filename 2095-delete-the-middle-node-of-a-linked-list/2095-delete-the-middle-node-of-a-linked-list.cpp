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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *slow = head;
        ListNode* fast = head;
        ListNode *prev = nullptr;
        if(head == nullptr){
            return nullptr;
        }
        if(head->next == nullptr){
            return nullptr;
        }
        
        int c = 0;
        while(fast != nullptr && fast -> next!= nullptr){
            c ++;
            if(c == 1){
                prev = head;
                slow = slow->next;
                fast = fast -> next -> next;
                
            }else{
                prev = prev -> next;
                slow = slow -> next;
                fast = fast -> next -> next;
            }
            
        }
        prev -> next = slow ->next;
        return head;
    }
};