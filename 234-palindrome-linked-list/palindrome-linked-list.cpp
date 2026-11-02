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
    ListNode* reverseList(ListNode* head) {
        // Using recursion
        if (head == NULL || head->next == NULL)
            return head;

        ListNode* a = head->next;
        ListNode* newhead = reverseList(a);

        a->next = head;
        head->next = NULL;

        return newhead;
    }

    bool isPalindrome(ListNode* head) {

        ListNode* og = head;
        ListNode* temp = NULL;
        ListNode* tail = NULL;

        // Creating a separate copy
        while (og != NULL) {
            ListNode* node = new ListNode(og->val);

            if (temp == NULL) {
                temp = node;
                tail = node;
            }
            else {
                tail->next = node;
                tail = node;
            }

            og = og->next;
        }

        // Reverse the copied list
        ListNode* rev = reverseList(temp);

        // Compare original and reversed copies
        og = head;

        while (og != NULL) {
            if (og->val != rev->val)
                return false;

            og = og->next;
            rev = rev->next;
        }

        return true;
    }
};