#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n); // O(N Log N)

    while (q--) {
        int val;
        cin >> val;

        // Binary search
        bool flag = false;
        int l = 0, r = n - 1;
        while (l <= r) { //O(log N)
            int mid = (l + r) / 2;
            if (a[mid] == val) {
                flag = true;
                break;
            } else if (a[mid] > val) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        if (flag) {
            cout << "found\n";
        } else {
            cout << "not found\n";
        }
    }

    return 0;
}
