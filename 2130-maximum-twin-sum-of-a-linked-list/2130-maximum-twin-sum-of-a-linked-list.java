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
    public ListNode reverseLinkedList(ListNode head){
        ListNode curr=head;
        ListNode prev=null;
        ListNode next=null;
        while(curr!=null){
            next=curr.next;
            curr.next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    public int pairSum(ListNode head) {
        int sum=0;
        int maxsum =0;
        ListNode slow=head;
        ListNode fast=head;
        while(fast!=null && fast.next!=null){
            slow=slow.next;
            fast=fast.next.next;
        }
        ListNode middle = reverseLinkedList(slow);
        ListNode futt=middle;
        ListNode cur=head;
        while(futt!=null){
            sum=cur.val+futt.val;
            maxsum=Math.max(sum,maxsum);

            futt=futt.next;
            cur=cur.next;
        }

        return maxsum;
    }
}