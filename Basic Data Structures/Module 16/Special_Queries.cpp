#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    stack<string> st1;
    stack<string> st2;
    
    while(t--){
        int cmd;
        cin>>cmd;
        
        if(cmd==0){
            string s;
            cin>>s;
            st1.push(s);
        } 
        else if(cmd==1){
            if(st1.empty() && st2.empty()){
                cout<<"Invalid"<<endl;
            } 
            else{
                if(st2.empty()){
                    while (!st1.empty()){
                        st2.push(st1.top());
                        st1.pop();
                    }
                }
                cout<<st2.top()<<endl;
                st2.pop();
            }
        }
    }
    
    return 0;
}
