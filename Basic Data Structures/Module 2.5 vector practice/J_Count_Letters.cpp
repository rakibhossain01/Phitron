#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> freq(26, 0); // Initialize frequency array of size 26 with 0

    // Count the frequency of each character in the string
    for (int i = 0; i < s.size(); i++) {
        freq[s[i] - 'a']++;
    }

    // Print the frequency of each character
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) { // Only print if the character occurs
            cout << static_cast<char>('a' + i) << " : " << freq[i] << endl;
        }
    }

    return 0;
}
