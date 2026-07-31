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
    ListNode* removeElements(ListNode* head, int val) {
        // Create a dummy node pointing to the head
        ListNode dummy(0, head);
        ListNode* curr = &dummy;

        while (curr->next != nullptr) {
            if (curr->next->val == val) {
                // Bypass the target node and free its memory
                ListNode* temp = curr->next;
                curr->next = curr->next->next;
                delete temp;
            } else {
                // Move forward only if no node was removed
                curr = curr->next;
            }
        }

        return dummy.next;
    }
};