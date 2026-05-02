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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>result;
        ListNode*temp=head;
        while(temp!=NULL){
            result.push_back(temp->val);
            temp=temp->next;
        }
        stack<int>st;
        int n=result.size();
        vector<int>ans(n);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top()<=result[i]){
                 st.pop();
            }
            if(st.empty()){
               ans[i]=0;
            }else{
                ans[i]=st.top();
            }
            st.push(result[i]);
        }
        return ans;
    }
};