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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr = head;

        while (curr != nullptr && curr->next != nullptr) {
            if (curr->val == curr->next->val) {
                // Save node to delete to prevent memory leak
                ListNode* temp = curr->next;
                curr->next = curr->next->next;
                delete temp;
            } else {
                // Move forward only if no duplicate was deleted
                curr = curr->next;
            }
        }

        return head;
    }
};