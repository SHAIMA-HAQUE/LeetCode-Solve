/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode* temp;
    struct ListNode* p=head;
    while(p!=NULL){
        if(p->next==NULL){
            break;
        }
        if(p->val!=p->next->val){
            p=p->next;
        }
        if(p->next!=NULL && p->val==p->next->val){
            temp=p->next;
            p->next=temp->next;
            free(temp);
        }
    }
    return head;
}