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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*temp=list1;
        ListNode*temp1=list2;
        ListNode*dummy=new ListNode(0);
        ListNode*head=dummy;
        while(temp!=NULL && temp1!=NULL){
            if(temp->val<=temp1->val){
                dummy->next=temp;
                temp=temp->next;
                dummy=dummy->next;
            }else{
                dummy->next=temp1;
                temp1=temp1->next;
                dummy=dummy->next;
            }
        }
        if(temp!=NULL){
            dummy->next=temp;
        }else{
            dummy->next=temp1;
        }
        return head->next;
    }
};