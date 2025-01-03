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
void delete_at_tail(Node* &head,Node* &tail){
	Node* deleteNode = tail;
	tail = tail->prev ;

	delete deleteNode;

	if(tail == NULL){
		head = NULL;
		return ;
	}
	tail->next = NULL ;
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


	delete_at_tail(head,tail);
	print_forward(head);
	//print_Backward(tail);

	return 0;
}