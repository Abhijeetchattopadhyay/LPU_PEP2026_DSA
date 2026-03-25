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
        ListNode*first=head;
        int steps=k-1;
        while(steps--){
            first=first->next;
        }
        ListNode*curr=head;
        int count=0;
        while(curr!=NULL){
            count++;
            curr=curr->next;
        }
        count=count-k;
        ListNode*temp=head;
        ListNode*prev=NULL;
        while(count--){
            prev=temp;
            temp=temp->next;
        }
        swap(temp->val,first->val);
        return head;
        
    }
};