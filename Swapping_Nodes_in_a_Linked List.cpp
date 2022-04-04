class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *temp=head,*temp1 = head;
        while(k-->1)
            temp = temp-> next;
        ListNode *temp2 = temp -> next;
        while(temp2!=NULL)
        {
            temp2 = temp2 -> next;
            temp1 = temp1 -> next;
        }
        swap(temp ->val, temp1->val);
        return head;
    }
};
