class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL)return head;
        ListNode *node=new ListNode(0,head);
        node->next=head;
        
        ListNode *fast=new ListNode(0,head);
        ListNode *slow=new ListNode(0,head);
        int c=0;
        
        while(fast->next->next!=NULL)
        {
            c++;
            if(c<=n)
            {
                fast->next=fast->next->next;
            }
            else
            {
                fast->next=fast->next->next;
                slow->next=slow->next->next;
            }
        }
        
        if(n-c==1)
        {
            return head->next;
        }
        else
        {
            slow->next->next=slow->next->next->next;
            return head;
        }
    }
};