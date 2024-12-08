#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;

	vector<string> v(n);

	cin.ignore();
	for(int i=0;i<n;i++){
		//cin>>v[i];
		getline(cin,v[i]);
	}

	// for(int i=0;i<n;i++){
	// 	cout<<v[i]<<endl;
	// }

	for(string s : v){
		cout<<s<<endl;
	}
}