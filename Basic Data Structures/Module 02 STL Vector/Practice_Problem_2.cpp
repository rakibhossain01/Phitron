#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;

	vector<int> v1(n);

	int m;
	cin>>m;

	vector<int> v2(m);

	for(int i=0;i<n;i++){
		cin>>v1[i];
	}
	for(int i=0;i<m;i++){
		cin>>v2[i];
	}
	v2.insert(v1.end(),v2.begin(),v2.end());

	v1.clear();

	for(int x : v2){
		cout<<x<<" ";
	}
	cout<<endl;

	return 0;
}