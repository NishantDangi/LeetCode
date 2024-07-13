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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* merge = nullptr;
        while((list1 != nullptr) || (list2 != nullptr)) {
            int a = (list1 != nullptr) ? list1->val : 101;
            int b = (list2 != nullptr) ? list2->val : 101;
            while((a <= b) && (list1 != nullptr)) {
                merge = (a == 101) ? merge : new ListNode(a, merge);
                list1 = (list1 != nullptr) ? list1->next : list1;
                a = (list1 != nullptr) ? list1->val : 101;
            }
            while((b < a) && (list2 != nullptr)) {
                merge = (b == 101) ? merge : new ListNode(b, merge);
                list2 = (list2 != nullptr) ? list2->next : list2;
                b = (list2 != nullptr) ? list2->val : 101;
            }
        }
        return reverse(merge);
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