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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);  // dummy node to start the result list
        ListNode* current = dummy;          // pointer to build the new list
        int carry = 0;                      // for handling carry-over values
        
        while (l1 != nullptr || l2 != nullptr || carry) {
            int sum = carry;
            
            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }
            
            carry = sum / 10;               // carry for next iteration
            current->next = new ListNode(sum % 10);  // create new node for current digit
            current = current->next;
        }
        
        return dummy->next; // skip dummy node
    }
};
