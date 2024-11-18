#include<bits/stdc++.h>
using namespace std;

int main(){
    //int a[5]; //static array
    int *p = new int[5];

    for(int i=0;i<=5;i++){
        cin>>p[i];
    }
    for(int i=0;i<=5;i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;

    return 0;
}