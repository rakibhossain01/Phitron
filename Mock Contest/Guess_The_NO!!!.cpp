#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin>>n;

    if(n<3){
        cout<<"NO"<<endl;
    }
    else if(n%3==0 || (n-4)%3==0 && n>=4 || (n-8)%3==0 && T>=8){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}