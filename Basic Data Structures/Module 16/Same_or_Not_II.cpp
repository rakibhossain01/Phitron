#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
        Node* prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack
{
    public:
        
        Node* head = NULL;
        Node* tail = NULL;
        int sz=0;

        void push(int val){
            sz++;
            Node* newnode = new Node(val);
            if(head == NULL){
                head = newnode;
                tail = newnode;
                return;
            }
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
        void pop(){
            sz--;
            Node* deletenode = tail;
            tail = tail->prev;
            delete deletenode;
            if(tail == NULL){
                head = NULL;
                return;
            }
            tail->next = NULL;
        }
        int top(){
            return tail->val;
        }
        int size(){
            return sz;
        }
        bool empty(){
            return head == NULL;
        }
};

class myQueue
{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

    void push(int val){
        sz++;
        Node* newnode = new Node(val);
        if(head == NULL){
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
    void pop(){
        sz--;
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        if(head == NULL){
            tail = NULL;
            return;
        }
        head->prev = NULL;
    }
    int front(){
        return head->val;
    }
    int back(){
        return tail->val;
    }
    int size(){
        return sz;
    }
    bool empty(){
        return head == NULL;
    }

};

int main()
{
    int n, m;
    cin>>n>>m;

    myStack s;
    myQueue q;

    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        s.push(val);
    }

    for(int i=0;i<m;i++){
        int val;
        cin>>val;
        q.push(val);
    }

    if(n != m){
        cout<<"NO";
        return 0;
    }

    for(int i=0;i<n;i++){
        if(s.top() != q.front()){
            cout<<"NO";
            
            return 0;
        }
        s.pop();
        q.pop();
    }
    cout<<"YES";
   
    return 0;
}
