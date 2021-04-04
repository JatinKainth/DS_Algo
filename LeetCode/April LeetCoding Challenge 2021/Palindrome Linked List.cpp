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
    bool isPalindrome(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* fast = head;
        ListNode* next_ptr = NULL;
        
        while (fast && fast->next) {
            fast = fast->next->next;
            next_ptr = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next_ptr;
        }
        
        if (fast) curr = curr->next;
        
        while(curr) {
            if (curr->val != prev->val) return false;
            curr = curr->next;
            prev = prev->next;
        }
        return true;
    }
};