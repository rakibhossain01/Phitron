#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    int runningSum[n];

    for (int i = 0; i < n; i++) {

        cin >> a[i];

        if (i == 0){
            runningSum[i] = a[i]; 
        }
        else{
            runningSum[i] = runningSum[i - 1] + a[i];
        }
    }

    for (int i = 0; i < n; i++) {
        cout << runningSum[i] << " ";
    }
    cout << endl;

    return 0;
}
