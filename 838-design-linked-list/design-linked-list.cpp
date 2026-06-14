class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};
class MyLinkedList {
public:
    Node* head = NULL;
    MyLinkedList() {}

    int get(int index) {

        Node* temp = head;
        while (temp != NULL && index >= 0) {

            if (index == 0) {
                return temp->val;
            }
            index--;
            temp = temp->next;
        }
        return -1;
    }

    void addAtHead(int val) {
        Node* newhead = new Node(val);

        newhead->next = head;
        head = newhead;
    }

    void addAtTail(int val) {
        Node* newtail = new Node(val);
        if (head == NULL) {
            head = newtail;
            return;
        }
        Node* temp = head;

        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newtail;
    }

    void addAtIndex(int index, int val) {
        Node* temp = head;
        int len = 0;
        while (temp != NULL) {
            len++;
            temp = temp->next;
        }
        if (index > len) {
            return;
        }
        if (index == 0) {
            addAtHead(val);
            return;
        } else if (index == len) {
            addAtTail(val);
            return;
        }
        temp = head;
        Node* newnode = new Node(val);

        int cnt = 0;
        while (temp != NULL) {
            cnt++;

            if (cnt == index) {
                newnode->next = temp->next;
                temp->next = newnode;
                return;
            }
            temp = temp->next;
        }
    }

    void deleteAtIndex(int index) {
        if (head == NULL) {
            return;
        }
        if (index == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        int cnt = 0;
        Node* temp = head;
        Node* prev = NULL;
        while (temp->next != NULL) {
            cnt++;
            prev = temp;
            if (index == cnt) {
                Node* del = prev->next;
                prev->next = prev->next->next;
                delete del;

                return;
            }
            temp = temp->next;
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */