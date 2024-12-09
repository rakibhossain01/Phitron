#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v1(n); //O(N)
    vector<int> v2;  

    for (int i = 0; i < n; i++) { //O(N)
        cin >> v1[i];

        if (v1[i] > 0){
            v2.push_back(1); 
        } 
        else if (v1[i] < 0) {
            v2.push_back(2); 
        } 
        else {
            v2.push_back(0); 
        }
    }

    for (int x : v2) { //O(N)
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
