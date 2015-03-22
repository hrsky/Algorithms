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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        int temp = 0;
        temp = l1->val + l2->val;
        ListNode *ln = new ListNode(temp % 10);
        ListNode *index = ln;
        l1 = l1->next;
        l2 = l2->next;
        int b = temp / 10;
        while (l1 != NULL || l2 != NULL) {
            if (l1 != NULL && l2 != NULL) {
                temp = l1->val + l2->val + b;
                l1 = l1->next;
                l2 = l2->next;
            } else if (l1 == NULL) {
                temp = l2->val + b;
                l2 = l2->next;
            } else if (l2 == NULL) {
                temp = l1->val + b;
                l1 = l1->next;
            }
            index->next = new ListNode(temp % 10);
            index = index->next;
            b = temp / 10;
        }
        if (b > 0) {
            index->next = new ListNode(b);
        }
        return ln;
    }
};