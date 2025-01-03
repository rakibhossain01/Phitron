#include <bits/stdc++.h>
using namespace std;

void printList(list<int> &lst){
    cout<<"L -> ";

    for (auto it=lst.begin();it != lst.end();it++){
        cout<<*it;

        if (next(it) != lst.end()){
            cout<<" ";
        }
    }
    cout<<endl;

    cout<<"R -> ";
    list<int> l = lst;
    reverse(l.begin(),l.end());

    for (auto it=l.begin();it != l.end();it++){
        cout<<*it;

        if (next(it) != lst.end()){
            cout<<" ";
        }
    }
    cout<<endl;
}

int main() {
    int t;
    cin >> t;

    list<int> lst;

    for (int i = 0; i < t; ++i) {
        int x, v;
        cin >> x >> v;

        if (x == 0) {
            lst.push_front(v);
        } else if (x == 1) {
            lst.push_back(v);
        } else if (x == 2) {
            if (v >= 0) {
                auto it = lst.begin();
                for (int i = 0; i < v && it != lst.end();i++) {
                    it++;
                }
                if (it != lst.end()) {
                    lst.erase(it);
                }
            }
        }

        printList(lst);
    }

    return 0;
}
