/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode dummy;
    struct ListNode *cursor = &dummy;

    cursor->next = NULL;

    while ( list1 != NULL && list2 != NULL ) {
        if (list1->val <= list2->val) {
            cursor->next = list1;
            list1 = list1->next;
        } else {
            cursor->next = list2;
            list2 = list2->next;
        }
        cursor = cursor->next; 
    }

    if( list1 != NULL) {
        cursor->next = list1;
    } else {
        cursor->next = list2;
    }

    return dummy.next;
}
