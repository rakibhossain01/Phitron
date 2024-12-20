#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int val;
	Node* next;

	Node(int val){
		this->val = val;
		this->next = NULL;
	}
};
void Same_to_Same(Node* &head,Node* &tail,int val){
	Node* newnode = new Node(val);

	if(head == NULL){
		head = newnode;
		tail = newnode;

		return ;
	}
	tail->next = newnode;
	tail = newnode;
}
void print_Same_to_Same(Node* &head1,Node* &head2){
	Node* same1 = head1;
	Node* same2 = head2;
	
	bool sm = true;

	while(same1 != NULL && same2 != NULL){
		if(same1->val != same2->val){
			sm = false;
			break;
		}
		same1 = same1->next;
		same2 = same2->next;
	}
	if(same1 == NULL && same2 == NULL){
		if(sm){
		   cout<<"YES\n";
	    }
	}
	else{
		cout<<"NO\n";
	}
}
int main(){
	Node* head1 = NULL;
	Node* tail1 = NULL;
	Node* head2 = NULL;
	Node* tail2 = NULL;

	int val;

	while(true){
		cin>>val;

		if(val==-1){
			break;
		}
		Same_to_Same(head1,tail1,val);
	}
	while(true){
		cin>>val;

		if(val==-1){
			break;
		}
		Same_to_Same(head2,tail2,val);
	}
	print_Same_to_Same(head1,head2);
}