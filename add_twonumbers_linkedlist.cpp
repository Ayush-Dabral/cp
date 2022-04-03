struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    
    if(l2==NULL)
        return l1;
    else if(l1==NULL)
        return l2;
    
    int carry=0,n1=0,n2=0;
    struct ListNode *p,*l,*r;
    l=r=p=NULL;
    while(1)
    {
        if(l1==l2)
            break;
        else
        {
            if(l1!=NULL)
            {   n1=l1->val;
                l1=l1->next;
            }
            else
                n1=0;
            if(l2!=NULL)
            {   n2=l2->val;
                l2=l2->next;
            }
            else
                n2=0;
            p=(struct ListNode*)malloc(sizeof(struct ListNode));
            p->val=n1+n2+carry;
            if(p!=NULL) {
                if(l==NULL)
                    l=r=p;
                else 
                {   r->next=p;
                    r=p;
                }
            }
            if(p->val>9)
            {   p->val=p->val-10;
                carry=1;
            }
            else
                carry=0;
            n1=n2=0;
        }
    }
    if(carry==1)
    {
        p=(struct ListNode*)malloc(sizeof(struct ListNode));
        p->val=1;
        r->next=p;
        r=p;
    }
    r->next=NULL;
    return l;
}
