
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        int count=0;
        ListNode*curr=head;
        
        while(curr!=NULL){
            curr=curr->next;
            count++;
        }
        count=count-n;
        if(count==0){
            return head->next;
        }
        ListNode*prev=NULL;
        ListNode*temp=head;
        while(count--){
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        return head;
    }
};