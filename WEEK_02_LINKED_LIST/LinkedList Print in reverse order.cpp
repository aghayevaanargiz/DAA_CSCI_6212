void PrintReverse(ListNode *head) {
    if (head == nullptr) {
        return;
    }
    PrintReverse(head->next);
    printf("%d ", head->val);
}
