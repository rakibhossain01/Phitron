#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;

	getline(cin,s);

	stringstream ss(s);

	string word;

	int cnt = 0;
	
	while(ss>>word){
		if(word=="Jessica"){
			cnt = 1;
			break;
		}
	}
	if(cnt==1){
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
	}

	return 0;
}