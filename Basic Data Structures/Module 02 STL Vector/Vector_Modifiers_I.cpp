#include<bits/stdc++.h>
using namespace std;

int main(){
	// vector<int> v1 = {1 , 2, 3 , 4 ,5 ,6};
	// vector<int>v2;
	// v2 = v1;

	// // for(int i=0; i<v2.size(); i++){
	// // 	cout<<v2[i]<<" ";
	// // }

	// //When without index then this loop use
	// v2.pop_back();
	// for(int x : v2){
	// 	cout<<x<<" ";
	// }
	// cout<<endl;


	// insert 
	// vector<int> v1 = {1 , 2, 3 , 4 ,5 ,6};
	// vector<int> v2 = {100,200,300};

	// v1.insert(v1.begin()+2,v2.begin(),v2.end()); //(index , value)

	// for(int x : v1){
	// 	cout<<x<<" ";
	// }

	//erase function
	// vector<int> v1 = {1 , 2, 3 , 4 ,5 ,6};

	// //v1.erase(v1.begin()+2);

	// v1.erase(v1.begin()+2,v1.begin()+5); //delete next index to index

	// for(int x : v1){
	// 	cout<<x<<" ";
	// }


	//replace function

	// vector<int> v = {1 , 2 , 3 , 2, 2, 6};
	// //replace(v.begin(),v.end(),3,100);  // 1 theke index suru hoi

	// replace(v.begin(),v.end()-1,2,100);

	// for(int x : v){
	// 	cout<<x<<" ";
	// }


	//find function
	vector<int> v = {1 , 2 , 3 , 2, 2, 6};

	//vector<int>:: iterator it = find(v.begin(),v.end(),100); //iterator return kore

	auto it = find(v.begin(),v.end(),6);
	
	//cout<< *it<<endl; //value print korbe nut find function index niyea kaj kore na
	if(it == v.end()){
		cout<<"Not Found\n";
	}
	else{
		cout<<"Found\n";
	}

}