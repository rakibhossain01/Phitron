#include <bits/stdc++.h>
using namespace std;

int main(){
    list<string> s;
    string s1;

    while (true) {
        cin>>s1;

        if(s1=="end"){
            break;
        }
        s.push_back(s1);
    }

    int n;
    cin>>n;
    string s2;
    auto current = s.begin();

    for (int i=0;i<n;i++) {
        cin>>s2;

        if (s2 == "visit") {
            string s3;
            cin>>s3;
            auto it = find(s.begin(),s.end(),s3);
            if(it != s.end()){
                current = it;

                cout<<*current<<endl;
            } 
            else{
                cout<<"Not Available"<<endl;
            }
        } 
        else if(s2 == "next") {
            if(current != s.end()) {
                auto nextit = current;
                nextit++;
                if(nextit != s.end()) {
                    current = nextit;

                    cout<<*current<<endl;
                } 
                else{
                    cout<<"Not Available"<<endl;
                }
            } 
            else{
                cout<<"Not Available"<<endl;
            }
        } 
        else if(s2 == "prev") {
            if(current != s.begin()) {
                auto previt = current;
                previt--;
                current = previt;

                cout<<*current<<endl;
            } 
            else{
                cout<<"Not Available"<<endl;
            }
        }
    }

    return 0;
}
