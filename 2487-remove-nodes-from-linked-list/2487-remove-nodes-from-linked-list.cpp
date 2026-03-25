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
    
    ListNode* removeNodes(ListNode* head) {
        ListNode*curr=head;
        ListNode*next=NULL;
        ListNode*prev=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        ListNode*slow=prev;
        while(slow!=NULL && slow->next!=NULL){
            if(slow->val>slow->next->val){
                slow->next=slow->next->next;
            }else{
                slow=slow->next;
            }
        }
        curr=prev;
        next=NULL;
        ListNode*prev2=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev2;
            prev2=curr;
            curr=next;
        }

        return prev2;
    }
};