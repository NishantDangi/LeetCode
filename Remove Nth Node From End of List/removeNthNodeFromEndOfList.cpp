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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* current = reverse(head);
        ListNode* ans = nullptr;;
        while(current != nullptr)
        {
            if(n!=1)
                ans = new ListNode(current->val, ans);
            n--;
            current = (current != nullptr) ? current->next : current;
        }
        return ans;
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