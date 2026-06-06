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
ListNode* merge(ListNode* root , ListNode* root2){
      ListNode* temp1=root;
        ListNode* temp2=root2;
        ListNode* dummy=new ListNode(-1);
        ListNode* curr=dummy;
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val < temp2->val){
                curr->next=temp1;
              temp1=  temp1->next;
            }
            else {
                curr->next=temp2;
                temp2=temp2->next;
            }
           
            curr=curr->next;
           
        }
        
        if(temp1!=NULL){
            curr->next=temp1;
        }
        if(temp2!=NULL){
            curr->next=temp2;
        }
        return dummy->next;
  }
    ListNode* mergeKLists(vector<ListNode*>& lists) {

    if(lists.empty()) return NULL;

    ListNode* ans = lists[0];

    for(int i = 1; i < lists.size(); i++) {
        ans = merge(ans, lists[i]);
    }

    return ans;
}
};