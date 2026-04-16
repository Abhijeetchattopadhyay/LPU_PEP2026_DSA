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
        ListNode*dummy=new ListNode(0);
        ListNode*curr=head;
        ListNode* ans=dummy;
        while(curr!=NULL&& curr->next!=NULL){
            if(curr->val!=curr->next->val){
                ans->next=curr;
                curr=curr->next;
                ans=ans->next;
                ans->next=NULL;
            }else{
                int val=curr->val;
                while(curr!=NULL && curr->val==val){
                     curr=curr->next;  
                }
            }
        }
        if(curr!=NULL){
            ans->next=curr;
        }
        return dummy->next;
    }
};