/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* curr = head;
    struct ListNode* prev = NULL;

    if ( head == NULL ) {
        return NULL;
    }

    while ( curr->next != NULL ) {
        struct ListNode* next = curr->next;

        curr->next = prev;
        prev = curr;
        curr = next;
    }
    curr->next = prev;

    return curr;
}
