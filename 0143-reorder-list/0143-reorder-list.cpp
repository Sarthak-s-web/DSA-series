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
ListNode* reverseLL(ListNode* slow)
{
    ListNode* prev=NULL;
    ListNode*curr=NULL;
    ListNode* Next=slow;
    while(Next!=NULL)
    {
        curr=Next;
        Next=Next->next;
        curr->next=prev;
        prev=curr;
    }
    return prev;
}
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL) return;
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* prev_slow=NULL;
        while(fast!=NULL && fast->next!=NULL)
        {
            prev_slow=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        if(prev_slow!=NULL)
        {
            prev_slow->next=NULL;
        }
        ListNode* head2=reverseLL(slow);
        ListNode* head1=head;
        while(head1!=NULL && head2!=NULL)
        {
            ListNode* next1=head1->next;
            ListNode* next2=head2->next;

            head1->next=head2;
            if(next1==NULL) break;
            
            head2->next=next1;

            head1=next1;
            head2=next2;
        }
    }
};