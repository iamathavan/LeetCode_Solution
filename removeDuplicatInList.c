/*
passed 168/168
100% acceptance
11.26 mb
0 ms
*/
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if (head == NULL) return head;
    struct ListNode* curr = head;
    while (curr->next != NULL) {
        if (curr->val == curr->next->val) {
            struct ListNode* temp = curr->next;
            curr->next = curr->next->next;
            free(temp);
        } else {
            curr = curr->next;
        }
    }
    return head;
}
