#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		int n,s,cnt=0;
		cin>>n>>s;

		int a[n];

		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		for(int i=0;i<n-2;i++){
			for(int j=i+1;j<n-1;j++){
				for(int k=j+1;k<n;k++){
					if((a[i]+a[j]+a[k])==s){
						cnt = 1;
						break;
					}
				}
			}
		}
		if(cnt==1){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}

	return 0;
}