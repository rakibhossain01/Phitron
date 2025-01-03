#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int val;
	Node* next = NULL;
	Node* prev = NULL;

	Node(int val){
		this->val = val;
		this->next = NULL;
		this->prev = NULL;
	}
};
void insert_at_head(Node* &head,Node* &tail,int val){
	Node* newnode = new Node(val);

	if(head == NULL){
		head = newnode;
		tail = newnode;

		return ;
	}
	newnode->next = head;
	head->prev = newnode;

	head = newnode;
}
void print_forward(Node* head){
	Node* tmp = head;

	while(tmp != NULL){
		cout<<tmp->val<<" ";
		tmp = tmp->next;
	}
	cout<<endl;
}
// void print_Backward(Node* tail){
// 	Node* tmp = tail;

// 	while(tmp != NULL){
// 		cout<<tmp->val<<" ";
// 		tmp = tmp->prev;
// 	}
// 	cout<<endl;
// }

int main(){
	Node* head = new Node(10);
	Node* a = new Node(20);
	Node* tail = new Node(30);

	head->next = a;
	a->prev = head;

	a->next = tail;
	tail->prev = a;

	insert_at_head(head,tail,100);
	print_forward(head);
	//print_Backward(tail);

	return 0;
}