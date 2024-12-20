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

void Get_Difference(Node*& head, Node*& tail, int val) {
    Node* newnode = new Node(val);

    if (head == NULL) {
        head = newnode;
        tail = newnode;
        return ;
    }
    tail->next = newnode;
    tail = newnode;
}

void print_Get_Difference(Node* head) {
    if (head == NULL) {
        cout<<0<<endl;
        return ;
    }

    int m = INT_MAX;
    int mi = INT_MIN;

    for (Node* i = head; i != NULL; i = i->next) {
        m = min(m, i->val);
        mi = max(mi, i->val);
    }
    cout<<mi-m<<endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int val;

    while (true) {
        cin>>val;

        if (val == -1) {
            break;
        }
        Get_Difference(head,tail,val);
    }

    print_Get_Difference(head);
    
    return 0;
}
