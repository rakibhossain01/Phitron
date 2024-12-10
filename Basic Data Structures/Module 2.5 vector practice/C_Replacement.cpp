#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;

	vector<int> v1(n);
	vector<int> v2;

	for(int i=0;i<n;i++){
		cin>>v1[i];
	}
	for(int x : v1){
		if(x>0){
			v2.push_back(1);
		}
		else if(x<0){
			v2.push_back(2);
		}
		else{
			v2.push_back(0);
		}
	}
	for(int x : v2){
		cout<<x<<" ";
	}
	cout<<endl;

	return 0;
}