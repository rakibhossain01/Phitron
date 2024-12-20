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
void Search(Node* &head,Node* &tail,int val){
	Node* newnode = new Node(val);

	if(head == NULL){
		head = newnode;
		tail = newnode;

		return ;
	}
	tail->next = newnode;
	tail = newnode;
}
void print_Search(Node* &head){
	if (head == NULL) {
        cout<<0<<endl;
        return ;
    }
    int find_val,found = 0,cnt = 0;
    cin>>find_val;

    for(Node* i = head ; i != NULL ; i = i->next){
    	if(find_val == i->val){
    		found = 1;
    		break;
    	}
    	cnt++;
    }
    if(found == 1){
    	cout<<cnt<<endl;
    }
    else{
    	cout<<-1<<endl;
    }
}
int main(){
	int t;
	cin>>t;

	while(t--){
		Node* head = NULL;
		Node* tail = NULL;

		int val;

		while(true){
			cin>>val;

			if(val == -1){
				break;
			}
			Search(head,tail,val);
		}
		print_Search(head);
	}
}