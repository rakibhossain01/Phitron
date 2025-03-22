#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;

	int a[n];

	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int t;
	cin>>t;

	for(int i=0;i<n;i++){
		if(t==a[i]){
			cout<<i<<endl;

			return 0;
		}
	}

	cout<<-1<<endl;

	return 0;
}