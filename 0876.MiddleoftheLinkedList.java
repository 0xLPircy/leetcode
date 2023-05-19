/**
 * Definition for singly-linked list.
 * public class ListNode {
 * int val;
 * ListNode next;
 * ListNode() {}
 * ListNode(int val) { this.val = val; }
 * ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode middleNode(ListNode head) {
        ListNode current = head;
        int n = 0;
        while (current != null) {
            n++;
            current = current.next;
        }
        current = head;
        // printf("%d. %d", n, n/2);
        for (int i = 0; i < n / 2; i++) {
            current = current.next;
        }
        return (current);
    }
}