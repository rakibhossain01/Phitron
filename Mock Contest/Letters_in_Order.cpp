#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int frq[26] = {0};

    for (auto ch : s) {
        frq[ch - 'a']++;
    }

    string ss;
    for (int i = 0; i < 26; i++) {
        if (frq[i] > 0) {
            ss += ('a' + i);
        }
    }

    cout << ss << endl;

    return 0;
}