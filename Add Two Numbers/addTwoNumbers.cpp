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
        ListNode *l = nullptr;
        int a, b, carry = 0;
        bool con1 = (l1 != nullptr), con2 = (l2 != nullptr);
        while(con1 || con2 || carry==1) {
            a = con1 ? l1->val : 0;
            b = con2 ? l2->val : 0;
            int d = a + b + carry;
            carry = (d>9) ? 1 : 0;
            l = new ListNode(d%10, l);
            l1 = con1 ? l1->next : l1;
            l2 = con2 ? l2->next : l2;
            con1 = (l1 != nullptr);
            con2 = (l2 != nullptr);
        }
        return reverse(l);
    }
    ListNode* reverse(ListNode* l) {
        ListNode* current = l;
        ListNode* prev = nullptr, * next = nullptr;
        while(current != nullptr) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        l = prev;
        return l;
    }
};