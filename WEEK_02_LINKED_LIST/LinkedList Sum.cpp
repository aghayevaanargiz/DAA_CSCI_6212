int sum(ListNode *head) {
    int totalSum = 0;
    ListNode *current = head;
    
    while (current != nullptr) {
        totalSum += current->val;
        current = current->next;
    }
    
    return totalSum;
}
