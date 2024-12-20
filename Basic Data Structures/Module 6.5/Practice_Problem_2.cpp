#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = nullptr;
    }
};

void insert_at_tail(Node*& head, Node*& tail, int val) {
    Node* newnode = new Node(val);
    if (head == nullptr) {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void print_linked_list(Node*& head) {
    vector<int> frq(101, 0);
    Node* tmp = head;

    while (tmp != NULL) {
        frq[tmp->val]++;
        tmp = tmp->next;
    }

    for (int i = 0; i <= 100; i++) {
        if (frq[i] > 1) {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while (true) {
        cin >> val;
        if (val == -1) {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    print_linked_list(head);

    return 0;
}
