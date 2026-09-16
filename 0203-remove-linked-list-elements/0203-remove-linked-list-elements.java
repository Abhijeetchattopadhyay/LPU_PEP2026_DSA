/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeElements(ListNode head, int val) {
        ListNode dummy = new ListNode(0);
        ListNode futt=dummy;
        ListNode curr=head;
        while(curr!=null){
            if(curr.val==val){
                curr=curr.next;
            }else{
                dummy.next=curr;
                dummy=dummy.next;
                curr=curr.next;
            }
        }
        dummy.next=null;
        return futt.next;
    }
}