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
    public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode curr=head;
        int count=0;
        while(curr!=null){
            count++;
            curr=curr.next;
        }
        int number = count-n;
        ListNode prev=null;
        ListNode futt=head;
        if(number==0){
            return head.next;
        }
        while(number!=0){
            prev=futt;
            futt=futt.next;
            number=number-1;
        }
        prev.next=futt.next;
        return head;
    }
}