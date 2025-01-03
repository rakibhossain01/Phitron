#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node* &head,Node* &tail,int val) {
    Node* newnode = new Node(val);
    if (head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

void reverse(Node* &head,Node* tmp) {
    if (tmp->next == NULL) {
        head = tmp;
        return;
    }
    reverse(head,tmp->next);
    tmp->next->next = tmp;
    tmp->next = NULL;
}

bool Palindrome(Node* head) {
    Node* newhead = NULL;
    Node* newtail = NULL;

    Node* tmp = head;
    while (tmp != NULL) {
        insert_at_tail(newhead,newtail,tmp->val);
        tmp = tmp->next;
    }

    reverse(newhead,newhead);

    tmp = head;
    Node* tmp2 = newhead;

    while (tmp != NULL) {
        if (tmp->val != tmp2->val) {
            return false;
        }
        tmp = tmp->next;
        tmp2 = tmp2->next;
    }

    return true;
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
        insert_at_tail(head,tail,val);
    }

    if(Palindrome(head) == true){
        cout<<"YES"<<endl;
    } 
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}
