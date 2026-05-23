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
    ListNode*reverseLL(ListNode*head){
        ListNode*prev=NULL;
        ListNode*next=NULL;
        ListNode*temp=head;
        while(temp!=NULL){
            next=temp->next;
            temp->next=prev;
            prev=temp;
            temp=next;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*temp=l1;
        ListNode*curr=l2;
        int carry=0;
        l1=reverseLL(l1);
        l2=reverseLL(l2);
        ListNode*dummy=new ListNode(0);
        ListNode*futt=dummy;
        while(l1!=NULL || l2!=NULL){
            int sum=0;
            if(l1!=NULL){
                sum=sum+l1->val;
            }
            if(l2!=NULL){
                sum=sum+l2->val;
            }
            sum+=carry;
            ListNode*next=new ListNode(sum%10);
            carry=sum/10;
            dummy->next=next;
            dummy=dummy->next;
            if(l1!=NULL){
                l1=l1->next;
            }
            if(l2!=NULL){
                l2=l2->next;
            }
        }
        if(carry){
            ListNode*next=new ListNode(carry);
            dummy->next=next;
        }
        return reverseLL(futt->next);
    }
};