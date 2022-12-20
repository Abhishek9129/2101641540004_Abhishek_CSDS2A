/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        int c=0,l=0;
        if(head==NULL )
        return head;
        struct ListNode*t=head;
        struct ListNode*lt;
        while(t!=NULL)
        {
            c++;
            lt=t;
            t=t->next;
        }
        if(c==0 || c==1 || k==0 || k==c || (k%c)==0)
        return head;
        k=k%c;
        l=c-k-1;t=head;
        //cout<<lt->val<<endl;
        while(l>0)
        {
            //cout<<"l"<<l<<endl;
          t=t->next;
          l--;
        }
       // cout<<t->val<<endl;
        struct ListNode*ad=t->next;
        t->next=NULL;
        lt->next=head;
        return ad;
    }
};
