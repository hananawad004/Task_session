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
    public ListNode reverseList(ListNode head) {
        ListNode prev = null;  // المؤشر للعقدة السابقة
        ListNode current = head;  // المؤشر للعقدة الحالية
        
        while (current != null) {
            ListNode next = current.next; // حفظ العقدة التالية
            current.next = prev;  // عكس اتجاه المؤشر
            
            prev = current;  // تحديث prev ليصبح العقدة الحالية
            current = next;  // تحريك current إلى العقدة التالية
        }
        
        return prev;  // prev يصبح رأس القائمة الجديدة بعد الانتهاء
        
    }
}