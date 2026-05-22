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
    ListNode*findMiddle(ListNode*head){
        ListNode*slow=head;
        ListNode*fast=head->next;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode*mergeLL(ListNode*list1,ListNode*list2){
        ListNode*dummy=new ListNode(0);
        ListNode*futt=dummy;
        ListNode*temp=list1;
        ListNode*curr=list2;
        while(temp!=NULL && curr!=NULL){
            if(temp->val<=curr->val){
                dummy->next=temp;
                temp=temp->next;
                dummy=dummy->next;
            }else{
                dummy->next=curr;
                curr=curr->next;
                dummy=dummy->next;
            }
        }
        if(temp!=NULL){
            dummy->next=temp;
        }else{
            dummy->next=curr;
        }
        return futt->next;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode*mid=findMiddle(head);
        ListNode*righthead=mid->next;
        mid->next=NULL;
        ListNode*lefthead=head;
        lefthead=sortList(lefthead);
        righthead=sortList(righthead);
        return mergeLL(lefthead,righthead);
        
    }
};