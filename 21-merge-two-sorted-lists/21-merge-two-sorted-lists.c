/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode *temp1 = list1;
    struct ListNode *temp2 = list2;
    struct ListNode *list3 = NULL;
        if(temp1 == NULL && temp2 != NULL){
            return temp2;
        }else if(temp1 != NULL && temp2 == NULL){
            return temp1; 
        }else if(temp1 == NULL && temp2 == NULL){
            return NULL;
        }
        if(temp1 -> val <= temp2 -> val){
           list3 = temp1;
           list3 -> next = mergeTwoLists(temp1->next, temp2);
        }else if(temp1 -> val > temp2 -> val){
            list3 = temp2;
            list3 -> next = mergeTwoLists(temp1, temp2->next);
        }else{
            return NULL;
        }
    
    return list3;
}