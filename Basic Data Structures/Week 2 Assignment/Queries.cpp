#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_head(Node* &head, int val) {
    Node* newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}

void insert_at_tail(Node* &head, int val) {
    Node* newnode = new Node(val);
    if (head == NULL) {
        head = newnode;
        return;
    }
    Node* tmp = head;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = newnode;
}


void delete_at_index(Node* &head, int index) {
    if (head == NULL){
        return ;
    }
    if (index == 0) {
        Node* tmp = head;
        head = head->next;
        delete tmp;
        return ;
    }
    Node* tmp = head;
    for (int i = 0; tmp != NULL; i++) {
        if (i == index - 1){
            break;
        } 
        tmp = tmp->next;
    }

    if (tmp == NULL || tmp->next == NULL){
        return ; 
    }
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;

    delete deleteNode ;
}

void printList(Node* head) {
    Node* tmp = head;
    while(tmp != NULL){
        cout<<tmp->val;
        if(tmp->next){
            cout << " ";
        }
        tmp = tmp->next;
    }
    cout<<endl;
}

int main() {
    int t;
    cin>>t;

    Node* head = NULL;

    while (t--) {
        int x, v;
        cin>>x>>v;

        if (x==0){
            insert_at_head(head, v);
        }
        else if (x==1){
            insert_at_tail(head,v);
        }
        else if (x==2){
            delete_at_index(head,v);
        }
        printList(head);
    }

    return 0;
}
