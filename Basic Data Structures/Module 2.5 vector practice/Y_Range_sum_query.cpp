#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> v(n); //O(N)
    vector<long long int> prefixSum(n + 1, 0); //O(N)


    for (int i = 0; i < n; i++) { //O(N)
        cin >> v[i];
        prefixSum[i + 1] = prefixSum[i] + v[i];
    }

    while (q--) { //O(q)
        int f, l;
        cin >> f >> l;

        cout << prefixSum[l] - prefixSum[f - 1] << endl; //O(1)
    }

    return 0;
}
