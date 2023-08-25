class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode *d=new ListNode(-1);
        d->next=head;
        ListNode *a=d;
        while(a->next!=NULL && a->next->next!=NULL)
        {
            ListNode *first=a->next;
            ListNode *second=a->next->next;
            first->next=second->next;
            a->next=second;
            a->next->next=first;
            a=a->next->next;
        }
        return d->next;
    }
};