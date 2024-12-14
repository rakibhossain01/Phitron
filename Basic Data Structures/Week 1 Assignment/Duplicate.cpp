#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n;
    cin >> n;

    vector<long long int> a(n);
    for (long long int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    int flag = 0;
    for (long long int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) {
            flag = 1;
            break;
        }
    }
    if(flag ==1 ){
    	cout<<"YES\n";
    }
    else{
    	cout << "NO" << endl;
    }
    return 0;
}
