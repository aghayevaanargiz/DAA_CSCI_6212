ListNode* intersection(ListNode *l1, ListNode *l2){
    if (l1 == NULL || l2 == NULL) return NULL;

    ListNode *a = l1;
    ListNode *b = l2;

    while (a != b) {
        if (a == NULL) {
            a = l2;
        } else {
            a = a->next;
        }

        if (b == NULL) {
            b = l1;
        } else {
            b = b->next;
        }
    }

    return a;
}
