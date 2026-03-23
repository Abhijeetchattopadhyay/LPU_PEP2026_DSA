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
    void reorderList(ListNode* head) {
        ListNode*slow=head;
        ListNode*fast=head;
        while( fast!=NULL && fast->next!=NULL ){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode*curr=slow->next;
        slow->next=NULL;
        ListNode*prev=NULL;
        ListNode*next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        ListNode*temp=head;
        ListNode*temp2=prev;
        while(temp2!=NULL){
            ListNode*futt=temp->next;
            ListNode*futt1=temp2->next;
            temp->next=temp2;
            temp2->next=futt;
            temp=futt;
            temp2=futt1;

            
        }
    }
};