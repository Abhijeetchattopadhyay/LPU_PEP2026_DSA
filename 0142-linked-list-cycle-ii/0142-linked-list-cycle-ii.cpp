/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 // initialize slow and fast at head;
 // move slow by 1and fast by 2 steps untill they intersect
 // then intersection point should be kept safe;
 // then move slow back to head
 // then move slow by 1 and intersectioon by 1
 // wherever they intersect is the starting point

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;

            if(slow==fast){
                slow=head;
              while(slow!=fast){
                slow=slow->next;
                fast=fast->next;
            }
            return fast;
            }
        }
        return NULL;
    }
};