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
    ListNode* swapNodes(ListNode* head, int k) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode*first=head;
        int steps=k-1;
        while(steps--){
            first=first->next;
        }
        ListNode*slow=head;
        ListNode*fast=head;
        for(int i=0;i<k;i++){
            fast=fast->next;
        }
        while(fast!=NULL){
              slow=slow->next;
              fast=fast->next;
        }
        swap(first->val,slow->val);
        return head;
    }
};