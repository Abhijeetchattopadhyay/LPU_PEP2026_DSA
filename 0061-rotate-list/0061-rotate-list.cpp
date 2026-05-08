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
       if(head==NULL || head->next==NULL || k==0){
        return head;
       }
       int count=0;
       ListNode*temp=head;
       while(temp!=NULL){
          count++;
          temp=temp->next;
       } 
       k=k%count;
       if(k==0){
        return head;
       }
       int rotate=count-k;
       
       ListNode*curr=head;
       ListNode*prev=NULL;
       while(rotate--){
          prev=curr;
          curr=curr->next;
       }
       prev->next=NULL;
       ListNode*futt=curr;
       while(curr->next!=NULL){
        curr=curr->next;
       }
       curr->next=head;
       return futt;

    }
};