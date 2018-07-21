/**
 * Practice Problem: https://leetcode.com/problems/merge-two-sorted-lists/description/
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* mergeHelp (struct ListNode *new, struct ListNode *a, struct ListNode *b) {
    if (b == NULL ){
        new =  a;
    } else if (a == NULL ){
        new =  b;
    } else if ( a->val <= b->val ) {
        new = a;
        new->next =  mergeHelp (new->next, a->next, b);
    } else {
        new = b;
        new->next = mergeHelp (new->next, a, b->next);
    }
    return new;
}

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* newList = NULL;
    
    if (l1 == NULL ){
        return l2;
    }
    else if (l2 == NULL ){
        return l1;
    } else if (l1->val <= l2->val) {
        newList = l1;
        newList->next = mergeHelp(newList->next, l1->next, l2);
    } else {
        newList = l2;
        newList->next = mergeHelp(newList->next, l1, l2->next);
    }
    
    return newList;
}