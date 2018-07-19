/**
 * Practice Problem: https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if ( head ) {
        struct ListNode* cur = head;
        struct ListNode* prev = NULL;
        while (cur) {
            if (prev && prev->val == cur->val) {
                prev->next = cur->next;
            }
            else {
                prev = cur;
            }
                cur = cur->next;
            
        }
    }
    return head;
    
}