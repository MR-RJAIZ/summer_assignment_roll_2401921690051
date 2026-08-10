
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
        // Initialize two pointers starting at head
        ListNode *slow = head;
        ListNode *fast = head;

        // Traverse the list: fast moves 2 steps, slow moves 1 step
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            // If fast catches slow, a cycle exists
            if (slow == fast) {
                return true;
            }
        }

        // Fast reached the end of the list; no cycle present
        return false;
    }
};
