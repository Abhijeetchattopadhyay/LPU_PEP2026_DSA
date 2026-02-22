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
    ListNode* removeElements(ListNode* head, int val) {
        
        while(head!=NULL && head->val==val){
            ListNode*del=head;
            head=head->next;
            delete del;
        }
        ListNode*curr=head;
        ListNode*prev=head;
        while(curr!=NULL){
            if(curr->val!=val){
                 prev=curr;
                 curr=curr->next;
            } else{
                prev->next=curr->next;
                curr=curr->next;
            }
        }
        return head;
    }
};