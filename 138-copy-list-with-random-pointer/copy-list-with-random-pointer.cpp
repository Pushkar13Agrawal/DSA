/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    void insertinmidd(Node* head) {
        Node* temp = head;
        while (temp != NULL) {
            
            Node* newnode = new Node(temp->val);
            newnode->next = temp->next;
            temp->next = newnode;

            temp = temp->next->next;
        }
    }
    void linkrandom(Node* head) {
        Node* temp = head;
        while (temp != NULL) {
            Node* newnode = temp->next;
           if(temp->random!=NULL){
             newnode->random = temp->random->next;
           }
           else{
            newnode->random = NULL;
           }
            temp=temp->next->next;
        }
    }
    Node* linknext(Node* head){
Node* temp = head;
Node* dummy=new Node(-1);
Node* curr=dummy;
while(temp!=NULL){
    curr->next=temp->next;
     curr=curr->next;
    temp->next=temp->next->next;
   
    temp=temp->next;
}
return dummy->next;
    }

    Node* copyRandomList(Node* head) {

insertinmidd(head);
linkrandom(head);
return linknext(head);
    }
};