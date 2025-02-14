#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node* &head, int val) {
    Node* newnode = new Node(val);
    if (head == NULL) {
        head = newnode;
    } 
    else {
        Node* tmp = head;
        while (tmp->next != NULL) {
            tmp = tmp->next;
        }
        tmp->next = newnode;
    }
}

void remove_duplicat(Node* head) {
    Node* newnode = head;
    while (newnode != NULL) {
        Node* prev = newnode;
        Node* tmp = newnode->next;
        while (tmp != NULL) {
            if (tmp->val == newnode->val) {
                prev->next = tmp->next;
                delete tmp;
                tmp = prev->next;
            } 
            else {
                prev = tmp;
                tmp = tmp->next;
            }
        }
        newnode = newnode->next;
    }
}

void print_list(Node* head) {
    Node* tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout<<endl;
}

int main() {
    Node* head = NULL;
    int val;
    while (true) {
        cin>>val;

        if(val == -1){
            break;
        }
        insert_at_tail(head, val);
    }
    remove_duplicat(head);

    print_list(head);
}
