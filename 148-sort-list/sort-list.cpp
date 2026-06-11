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
    ListNode* Merge(ListNode* head1, ListNode* head2) {
        ListNode* t1 = head1;
        ListNode* t2 = head2;
        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;
        while (t1 != NULL && t2 != NULL) {
            if (t1->val <= t2->val) {
                curr->next = t1;
                t1 = t1->next;
            } else {
                curr->next = t2;
                t2 = t2->next;
            }
            curr = curr->next;
        }
        if (t1 != NULL) {
            curr->next = t1;
        }
        if (t2 != NULL) {
            curr->next = t2;
        }
        return dummy->next;
    }
    ListNode* MS(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }
        ListNode* midd = mid(head);
        ListNode* lefthead = head;
        ListNode* righthead = midd->next;
        midd->next = NULL;

        lefthead = MS(lefthead);
        righthead = MS(righthead);
        return Merge(lefthead, righthead);
    }
    ListNode* mid(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;
        while (fast != NULL && fast->next != NULL) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        return prev;
    }

    ListNode* sortList(ListNode* head) { return MS(head); }
};