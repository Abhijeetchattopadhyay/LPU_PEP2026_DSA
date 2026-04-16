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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
       unordered_set<int>ans;
       int n=nums.size();
       for(int i=0;i<n;i++){
           ans.insert(nums[i]);
       }
       ListNode*curr=head;
       ListNode*dummy=new ListNode(0);
       ListNode*temp=dummy;
       while(curr!=NULL){
           if(ans.find(curr->val)!=ans.end()){
               curr=curr->next;
           }else{
                temp->next=curr;
                temp=temp->next;
                curr=curr->next;
           }
       }
       temp->next=NULL;
       return dummy->next;

    }
};