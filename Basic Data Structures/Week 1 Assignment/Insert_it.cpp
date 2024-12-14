#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n;

    vector<int> v1(n);
    for (int i=0;i<n;i++) {
        cin>>v1[i];
    }

    cin>>m;
    vector<int> v2(m);
    for (int i=0;i<m;i++) {
        cin>>v2[i];
    }

    int in;
    cin>>in;

    v1.insert(v1.begin()+in,v2.begin(),v2.end());

    for (int x : v1) {
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}
