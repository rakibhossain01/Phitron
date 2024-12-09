#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; //O(1)
	cin>>n; //O(1)

	vector<int> v1(n); //O(N)
	vector<int> v2(n); //O(N)

	for(int i=0;i<n;i++){ //O(N)
		cin>>v1[i];
	}
	for(int i=0;i<n;i++){ //O(N)
		cin>>v2[i];
	}

	vector<int> v3; //O(N)
	v3.resize(2*n); //O(N)

	v3 = v2; //O(1)

	v3.insert(v3.end(),v1.begin(),v1.end()); //O(N)

	for(int x : v3){ //O(N)
		cout<<x<<" ";
	}
	cout<<endl; //O(1)

	return 0; //O(1)
}