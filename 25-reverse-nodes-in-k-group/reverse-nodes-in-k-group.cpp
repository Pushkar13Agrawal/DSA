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
    ListNode* kthnode(ListNode* temp, int k) {
        k -= 1;
        while (temp != NULL && k > 0) {
            k--;
            temp = temp->next;
        }
        return temp;
    }

    ListNode* reverse(ListNode* temp) {

        ListNode* curr = temp;
        ListNode* prev = NULL;
        while (curr != NULL) {
            ListNode* front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }
        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prevnode = NULL;
        while (temp != NULL) {

            ListNode* ktthnode = kthnode(temp, k);

            if (ktthnode == NULL) {
                if (prevnode != NULL){
                    prevnode->next = temp;}
                break;
            }
            ListNode* nextNode = ktthnode->next;
            ktthnode->next = NULL;
            ListNode* newHead = reverse(temp);
            if (temp == head) {
                head = newHead;
            } else {
                prevnode->next = newHead;
            }
            prevnode = temp;
            temp = nextNode;
        }
        return head;
    }
};