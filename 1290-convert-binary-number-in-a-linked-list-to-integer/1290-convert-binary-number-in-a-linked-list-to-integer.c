/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int count_node(struct ListNode *head){
    struct ListNode *temp = head;
    int c = 0;
    while(temp != NULL){
        c++;
        temp = temp -> next;
    }
    return c;
}

int getDecimalValue(struct ListNode* head){
    struct ListNode *temp = head;
    int deci = 0;
    int power;
    if(head == NULL){
        return NULL;
    }else{
        power = count_node(head);
        // printf("%d",power);
        while(temp != NULL){
            deci = deci + pow(2, power-1) * temp->val;
            power --;
            temp = temp ->next;
        }
    
    }
    
    return deci;
}