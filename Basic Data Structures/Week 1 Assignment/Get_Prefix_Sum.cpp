#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int n;
	cin>>n;

	long long int a[n],b[n],sum = 0;

	for(long long int i=0;i<n;i++){
		cin >> a[i];
		sum += a[i];
		b[i] = sum ;
	}
	for(long long int i=n-1;i>=0;i--){
		cout<<b[i]<<" ";
	}

	return 0;
}