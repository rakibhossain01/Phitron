#include<bits/stdc++.h>
using namespace std;

vector<int> get_array(int n){
	vector<int> v(n);

	for(int i=0;i<n;i++){
		cin>>v[i];
	}

	return v;
}

int main(){
	int n;
	cin>>n;

	vector<int> v1 = get_array(n);

	for(int x : v1){
		cout<<x<<" ";
	}
	cout<<endl;

	return 0;
}