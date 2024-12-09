#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;

	vector<int> v(n);

	int m = INT_MIN;

	for(int i=0;i<n;i++){
		cin>>v[i];

		m = max(m,v[i]);
	}
	cout<<m<<endl;

	return 0;
}