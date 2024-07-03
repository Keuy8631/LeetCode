/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head) {
    struct ListNode *tmp = head;
    struct ListNode *prev = NULL;
    int cnt = 0;
    while(tmp){
        tmp = tmp->next;
        cnt++;
    }
    if(cnt==1) return NULL;
    tmp = head;
    int mid = cnt/2+1;
    for(int i=0; i<mid-1; i++){
        prev = tmp;
        tmp = tmp->next;
    }
    prev->next = tmp->next;
    free(tmp);
    return head;
}