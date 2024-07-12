/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *pre = NULL, *tmp = NULL;
    while(head){
        tmp = head->next;
        head->next = pre;
        pre = head;
        head = tmp;
    }
    return pre;
}