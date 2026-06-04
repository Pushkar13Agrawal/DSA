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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL) {
            return NULL;
        }
        ListNode* len = head;
        int leng = 0;
        while (len != NULL) {
            leng++;
            len = len->next;
        }
        k = k % leng;
        if (k == 0) {
            return head;
        }

        ListNode* tail = head;
        ListNode* prev = head;

        int dist = leng - k - 1;
        while (dist != 0) {
            prev = prev->next;
            dist--;
        }
        while (tail->next != NULL) {
            tail = tail->next;
        }

        tail->next = head;

        head = prev->next;

        prev->next = NULL;

        return head;
    }
};