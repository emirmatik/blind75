// You are given the heads of two sorted linked lists list1 and list2.

// Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

// Return the head of the merged linked list.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode* headA = new ListNode();
    ListNode* a = headA;
    
    while (list1 != NULL && list2 != NULL) {
        if (list1->val > list2->val) {
            a->next = list2;
            list2 = list2->next;
        } else {
            a->next = list1;
            list1 = list1->next;
        }
            a = a->next;
    }
    
    while (list1 != NULL) {
        a->next = list1;
        list1 = list1->next;
        a = a->next;
    }
    
    while (list2 != NULL) {
        a->next = list2;
        list2 = list2->next;
        a = a->next;
    }
    
    return headA->next;
}