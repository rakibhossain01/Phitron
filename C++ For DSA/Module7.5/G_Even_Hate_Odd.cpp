#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int a[n],even_count = 0,odd_count = 0;

         for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] % 2 == 0) {
                ++even_count;
            } 
            else {
                ++odd_count;
            }
        }
        if (abs(even_count - odd_count) > n % 2) {
            cout << -1 << endl;
        } 
        else {
            cout << abs(even_count - odd_count) / 2 << endl;
        }
    }

    return 0;
}