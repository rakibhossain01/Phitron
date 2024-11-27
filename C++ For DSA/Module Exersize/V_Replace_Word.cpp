#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    getline(cin, S);
    
    string target = "EGYPT";
    size_t pos;
    
    while ((pos = S.find(target)) != string::npos) {
        S.replace(pos, target.length(), " ");
    }
    
    cout << S << endl;
    
    return 0;
}
