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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *ptrA = headA;
        ListNode *ptrB = headB;
        while(ptrA != ptrB){
            if(ptrA == NULL){
                ptrA = headB;
            }else{
                ptrA = ptrA -> next;
            }
            if(ptrB == NULL){
                ptrB = headA;
            }else{
                ptrB = ptrB -> next;
            }
        }
        return ptrA;
    }
};