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
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        priority_queue<pair<int, ListNode*>, vector<pair<int, ListNode*>>,
                       greater<pair<int, ListNode*>>>
            pq;
        for (int i = 0; i < lists.size(); i++) {
            if (lists[i] != NULL) {
                pq.push({lists[i]->val, lists[i]});
            }
        }
        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;
        while (!pq.empty()) {
            auto it = pq.top(); // stores the top of pq (which is min)
            pq.pop();           // remove that min from pq
            if (it.second->next !=
                NULL) // this line checks if next exist of it or not if it does
                      // not then dont push the next
            {
                pq.push({it.second->next->val, it.second->next});
            }
            curr->next = it.second;
            curr = curr->next;
        }
        return dummy->next;
    }
};