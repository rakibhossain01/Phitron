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

void insert_at_tail(Node* &head,Node* &tail, int val) {
    Node* newnode = new Node(val);

    if(head == NULL){
        head = newnode;
        tail = newnode;

        return;
    }
    tail->next = newnode;

    //tail = tail->next;
    tail = newnode;
    
    //Node* tmp = head;

    // while(tmp->next != NULL){
    //     tmp = tmp->next;
    // }

    //tmp->next = newnode;
}

void print_reverse(Node* tmp) {
    if(tmp == NULL){
        return;
    }
    //cout<< tmp->val <<endl;
    print_reverse(tmp->next);
    cout<< tmp->val <<endl;
}

int main() {
    //Node* head = NULL;
    Node* head = NULL ;
    Node* tail = NULL ;

    int val;

    while(true){
        cin>>val;

        if(val == -1){
            break;
        }
        insert_at_tail(head,tail,val);
    }
    print_reverse(head);

    return 0;
}
