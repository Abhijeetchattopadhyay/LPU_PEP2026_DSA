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
        // calculating the size of the linked list
        if(head==NULL || head->next==NULL){
            return head;
        }
        int count=0;
        ListNode*curr=head;
        while(curr!=NULL){
            count++;
            curr=curr->next;
        }
        k=k%count;
        if(k==0) return head;
        count=count-k;
        ListNode*temp=head;
        ListNode*prev=NULL;
        while(count--){
            prev=temp;
            temp=temp->next;
        }
        prev->next=NULL;
        ListNode*tail=temp;
        while(tail->next!=NULL){
            tail=tail->next;
        }
        tail->next=head;
        
        return temp;
    }
};