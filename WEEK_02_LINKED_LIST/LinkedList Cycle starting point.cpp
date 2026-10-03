ListNode* detectCycle(ListNode *head)
{
    ListNode *p = head;
    ListNode *q = head;

    while(q->next && q->next->next){
        p = p->next;
        q = q->next->next;
        if(q == p){
            q = head;
            while(q!=p){
                q = q->next;
                p = p->next;
            }
            return p;
        }
    }
    return NULL;
}
