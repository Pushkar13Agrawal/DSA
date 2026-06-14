class Node {
public:
    string data;
    Node* next;
    Node* back;
    Node(string data) {
        this->data = data;
        this->next = NULL;
        this->back = NULL;
    }
};
class BrowserHistory {
public:
    Node* currpage = NULL;
    BrowserHistory(string homepage) { currpage = new Node(homepage); }

    void visit(string url) {
        Node* temp = currpage->next;
        while (temp != NULL) {
            Node* curr = temp;
            temp = temp->next;
            delete curr;
        }
        currpage->next = NULL;
        Node* newnode = new Node(url);
        currpage->next = newnode;
        newnode->back = currpage;
        currpage = newnode;
    }

    string back(int steps) {
        while (steps != 0 && currpage->back != NULL) {
            currpage = currpage->back;
            steps--;
        }
        return currpage->data;
    }

    string forward(int steps) {
        while (steps > 0 && currpage->next != NULL) {
            currpage = currpage->next;
            steps--;
        }
        return currpage->data;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */