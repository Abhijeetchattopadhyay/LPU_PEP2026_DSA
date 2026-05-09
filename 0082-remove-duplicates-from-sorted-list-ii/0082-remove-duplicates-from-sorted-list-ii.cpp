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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode*dummy=new ListNode(0);
        ListNode*prev=dummy;  
        ListNode*temp=head;
        dummy->next=head;
        while(temp!=NULL && temp->next!=NULL){
            if(temp->val!=temp->next->val){
                prev=temp;
                temp=temp->next;
            }else{
                int val=temp->val;
                while(temp!=NULL && val==temp->val){
                    temp=temp->next;
                }
                prev->next=temp;
            }
        }
        return dummy->next;
    }
};