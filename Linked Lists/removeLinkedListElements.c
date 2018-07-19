/**
 * Practice Problem: https://leetcode.com/problems/remove-linked-list-elements/description/
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    if ( head ){
        struct ListNode* prev = NULL;
        struct ListNode* cur = head;
        while (cur) {
            if (cur->val == val) {
                if (prev) {
                    prev->next = cur->next;
                }
                else {
                    head = head->next;
                }
            } else {
                prev = cur;
            }
            cur = cur->next;
        }
    }
    return head;
}