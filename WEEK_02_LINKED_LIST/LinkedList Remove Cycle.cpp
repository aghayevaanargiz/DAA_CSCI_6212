ListNode* removeCycle(ListNode* head)
{
    if (head == NULL) return NULL;

    ListNode *p = head;
    ListNode *q = head;
  
    // detect the cycle
    while (q != NULL && q->next != NULL) {
        p = p->next;
        q = q->next->next;
        if (p == q) break;
    }
  
    // No cycle found
    if (q == NULL || q->next == NULL) return head;

    p = head;
  
    //  find the last node of the cycle
    if (p == q) {
        // Cycle starts at head, so find the node that points back to head
        while (q->next != head) {
            q = q->next;
        }
    } else {
        // Stop one step before the meeting point (the cycle start)
        while (p->next != q->next) {
            p = p->next;
            q = q->next;
        }
    }
    // fast is now the last node in the cycle
    q->next = NULL;
    return head;
}
