int length(ListNode *head)
{
    int Length = 0;
    ListNode *current = head;

    while(current!= nullptr){
        Length++;
        current = current->next;
    }

    return Length;
}
