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
    bool hasCycle(ListNode *head) {
        ListNode*temp=head;
        int timer=1;
        unordered_map<ListNode*,int>mp;
        while(temp!=NULL){
            if(mp.find(temp)!=mp.end()){
                return true;
            }
            mp[temp]=timer;
            timer++;
            temp=temp->next;
        }
        return false;
    }
};