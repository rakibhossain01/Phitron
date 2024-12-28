#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_any_pos(Node*& head, int idx, int val) {
    Node* newnode = new Node(val);

    if (idx == 1) { // Insert at the beginning
        newnode->next = head;
        if (head != NULL) {
            head->prev = newnode;
        }
        head = newnode;
        return;
    }

    Node* tmp = head;
    for (int i = 1; i < idx - 1 && tmp != NULL; i++) {
        tmp = tmp->next;
    }

    if (tmp == NULL) {
        cout << "Invalid index" << endl;
        delete newnode;
        return;
    }

    newnode->next = tmp->next;
    if (tmp->next != NULL) {
        tmp->next->prev = newnode;
    }
    tmp->next = newnode;
    newnode->prev = tmp;
}

void print_forward(Node* head) {
    Node* tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;

    insert_at_any_pos(head, 1, 100); // Insert at position 1
    insert_at_any_pos(head, 2, 300); // Insert at position 2
    insert_at_any_pos(head, 2, 200); // Insert at position 2 (between 100 and 300)

    print_forward(head);

    return 0;
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                               