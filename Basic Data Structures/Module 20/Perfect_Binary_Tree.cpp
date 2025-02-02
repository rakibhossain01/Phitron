#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* left;
        Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree(){
    int val;
    cin >> val;
    Node* root;
    if(val == -1){  
        root = NULL;
    }
    else{ 
        root = new Node(val);
    }
    queue<Node*> q;
    if(root){ 
        q.push(root);
    }
    while(!q.empty()){
        Node* p = q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        Node* myLeft, *myRight;
        if(l == -1){ 
            myLeft = NULL;
        }
        else{ 
            myLeft = new Node(l);
        }
        if(r == -1){ 
            myRight = NULL;
        }
        else{ 
            myRight = new Node(r);
        }
        p->left = myLeft;
        p->right = myRight;
        if(p->left){
            q.push(p->left);
        }
        if(p->right){
            q.push(p->right);
        }
    }
    return root;
}

int cal_depth(Node* root){
    if(root == NULL){
        return 0;
    }
    int m = max(cal_depth(root->left),cal_depth(root->right)); 
    int s = 1+m; 
    return s;
}

int count_nodes(Node* root){
    if(root == NULL){
        return 0;
    }
    int l = count_nodes(root->left);
    int r = count_nodes(root->right);
    return l+r+1;
}

bool perfect(Node* root){
    if(root == NULL){
        return true;
    }
    int depth = cal_depth(root);
    int total_nodes = count_nodes(root);
    int total = pow(2,depth) - 1;
    
    if(total == total_nodes){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    Node* root = input_tree();
    if(perfect(root)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
