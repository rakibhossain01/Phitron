#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    stack<int> s;
    queue<int> q;

    for (int i=0;i<n;i++) {
        int x;
        cin>>x;
        s.push(x);
    }

    for (int i=0;i<m;i++) {
        int y;
        cin>>y;
        q.push(y);
    }

    if (n != m) {
        cout<<"NO";
        return 0;
    }

    for (int i=0;i<n;i++) {
        if (s.top() != q.front()) {
            cout<<"NO";

            return 0;
        }
        s.pop();
        q.pop();
    }
    cout<<"YES";

    return 0;
}
