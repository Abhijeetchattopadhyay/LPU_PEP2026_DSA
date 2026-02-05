/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int findlength(ListNode* head){
        int length=0;
        ListNode* temp=head;
        while(temp!=NULL){
            length++;
            temp=temp->next;
        }
        return length;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
         int lenA= findlength(headA);
         int lenB =findlength(headB);
         ListNode* tempA=headA;
         ListNode* tempB=headB;
         int diffInlength=abs(lenA-lenB);
         if(lenB>lenA){
            while(diffInlength--){
                tempB=tempB->next;
                 
            }
         } else{
            while(diffInlength--){
                tempA=tempA->next;
            }

         }
         while(tempA!=tempB){
            tempA=tempA->next;
            tempB=tempB->next;
         }
         return tempA;
    }
};