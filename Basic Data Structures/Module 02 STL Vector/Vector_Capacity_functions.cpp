#include<bits/stdc++.h>
using namespace std;

int main(){
	// //Type 2
	// vector<int> v;

	// cout<<v.max_size()<<endl;

	//Type 3
	// vector<int> v;
	// v.push_back(10);
	// cout<<v.capacity()<<endl;
	// v.push_back(11);
	// cout<<v.capacity()<<endl;
	// v.push_back(12);
	// cout<<v.capacity()<<endl;
	// v.push_back(23);
	// cout<<v.capacity()<<endl;
	//vector.push_back(122);
	//cout<<v.capacity()<<endl;
	// vector er size double kore bar a

	// //Type 4
	 // vector<int>v;

	 // v.push_back(1);
	 // v.push_back(2);
	 // v.push_back(3);
	 // v.push_back(4);

	 // cout<<v.size()<<endl;

	 // v.clear(); //clear sudu size ta k clear kore but value k noi
	 // cout<<v.size()<<endl;

	 // cout<<v[2]<<endl; 

	//Type 5
	vector<int>v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);

	v.resize(2);

	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}

}