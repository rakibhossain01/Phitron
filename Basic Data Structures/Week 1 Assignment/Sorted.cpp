#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;

        vector<int> v(n);
        for (int i=0;i<n;i++) {
            cin>>v[i];
        }

        bool s = true;
        for (int i=0;i<n-1;i++) {
            if (v[i] > v[i + 1]) {
                s = false;
                break;
            }
        }

        if(s){
            cout << "YES\n";
        } 
        else{
            cout << "NO\n";
        }
    }
    return 0;
}
