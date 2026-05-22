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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*temp1=l1;
        ListNode*temp2=l2;
        ListNode*dummy=new ListNode(0);
        ListNode*curr=dummy;
        int carry=0;
        while(temp1!=NULL || temp2!=NULL){
            int sum=0;
            if(temp1!=NULL){
                 sum+=temp1->val;
            }
            if(temp2!=NULL){
                sum+=temp2->val;
            }
            sum+=carry;
            ListNode*futt=new ListNode(sum%10);
            carry=sum/10;
        curr->next=futt;
        curr=curr->next;
        if(temp1!=NULL){
            temp1=temp1->next;
        }
        if(temp2!=NULL){
            temp2=temp2->next;
        }
        }
        if(carry){
            ListNode*futt=new ListNode(carry);
            curr->next=futt;
            curr=curr->next;
        }
        return dummy->next;
    }
};