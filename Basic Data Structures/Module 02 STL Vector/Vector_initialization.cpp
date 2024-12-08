#include<bits/stdc++.h>
using namespace std;

int main(){
	//Type 1
	//vector<int> v;

	//Type 2
	//vector<int> v(5);

	//Type 3
	// vector<int>v(10,4);
	// for(int i=0;i<v.size();i++){
	// 	cout<<v[i]<<" ";
	// }
	// cout<<endl;


	//Type 4
	// vector<int>v1(10,5);
	// vector<int>v2(v1);

	// for(int i=0;i<v2.size();i++){
	// 	cout<<v2[i]<<" ";
	// }
	// cout<<endl;


	//Type 5
	int a[5] = {1 , 2, 3, 4 ,5};  //// vector<int> v = {1 , 2 , 3, 4 , 5 , 6};

	vector<int>v(a,a+5);  

	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;

	cout<<v.size()<<endl;

	return 0;
}