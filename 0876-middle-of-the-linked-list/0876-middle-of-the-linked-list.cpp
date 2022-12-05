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
    ListNode* middleNode(ListNode* head) {
        // ListNode *temp = head;
        // int c = 0;
        // while(temp != nullptr){
        //     temp = temp -> next;
        //     c++;
        // }
        // ListNode *slow = head;
        // ListNode *fast = head;
        // while(fast -> next != nullptr && fast -> next -> next != nullptr){
        //     slow = slow -> next;
        //     fast = fast -> next -> next;
        // }
        // if(c%2 == 0){
        //     return slow-> next;
        // }
        // return slow;
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast != nullptr && fast -> next != nullptr){
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        return slow;
    }
};