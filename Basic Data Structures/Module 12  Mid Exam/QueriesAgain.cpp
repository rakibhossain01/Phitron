#include <bits/stdc++.h>
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

void printList(Node* head);

void insert(Node* &head,Node* &tail,int index,int val){
    Node* newNode = new Node(val);
    
    if(index<0){
        cout<<"Invalid"<<endl;

        return;
    }

    if(index==0){
        if(head==NULL){
            head = newNode;
            tail = newNode;
        } 
        else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        printList(head);
        return;
    }

    Node* current = head;

    int cIdx = 0;

    while(current != NULL && cIdx<index-1){

        current = current->next;

        cIdx++;
    }

    if(current == NULL) {

        cout<<"Invalid"<<endl;

        return;
    }

    if(current->next == NULL){

        current->next = newNode;

        newNode->prev = current;

        tail = newNode;
    } 
    else{
        newNode->next = current->next;

        newNode->prev = current;

        if(current->next != NULL){
            current->next->prev = newNode;
        }
        current->next = newNode;
    }
    
    printList(head);
}

void print_L_To_R(Node* head) {
    Node* current = head;

    while (current != NULL) {
        cout << current->val;

        if(current->next != NULL){
            cout<<" ";
        }
        current = current->next;
    }
    cout<<endl;
}

void print_R_To_L(Node* tail) {
    Node* current = tail;

    while (current != NULL){
        cout<<current->val;

        if (current->prev != NULL){
            cout<<" ";
        }
        current = current->prev;
    }
    cout << endl;
}

void printList(Node* head) {

    cout << "L -> ";

    print_L_To_R(head);

    if (head != NULL) {

        Node* current = head;

        while (current->next != NULL){
            current = current->next;
        }
        cout<<"R -> ";

        print_R_To_L(current);
    }
}

int main() {
    int t;
    cin>>t;
    
    Node* head = NULL;
    Node* tail = NULL;
    
    for (int i=0;i<t;i++) {
        int x,v;
        cin>>x>>v;
        
        insert(head,tail,x,v);
    }
    
    return 0;
}
