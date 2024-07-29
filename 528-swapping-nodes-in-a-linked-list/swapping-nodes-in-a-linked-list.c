/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapNodes(struct ListNode* head, int k) {
    if(!head) return NULL;
    struct ListNode *prev = head, *rear = head, *knode = NULL;
    int cnt = 1;
    while(prev){
        if(cnt==k) knode = prev;
        prev = prev->next;
        cnt++;
    }
    prev = head;
    for(int i=1; i<cnt-k; i++) rear = rear->next;

    int tmp = knode->val;
    knode->val = rear->val;
    rear->val = tmp;
    return prev;
}