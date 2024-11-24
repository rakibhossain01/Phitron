#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;

	cout<<"Size = "<<s.size()<<endl;

	cout<<"Maximum size = "<<s.max_size()<<endl;

	cout<<"Capacity = "<<s.capacity()<<endl;

	// s.clear();
	// cout<<"Clear : "<<s<<endl;

	if(s.empty()==true){//(s.size()== 0)
		cout<<"Empty"<<endl;
	}
	else{
		cout<<"Not Empty"<<endl;
	}
	//s.resize(4);
	s.resize(20,'x');
	cout<<"Resize string = "<<s<<endl;

	cout<<"First charecter = "<<s.back()<<endl;
	cout<<"Last charecter = "<<s.front()<<endl;

	string s2;
	cin>>s2;

	s2.push_back('A');
	cout<<"S2 = "<<s2<<endl;

	s2.erase(3,2);
	cout<<"S2 erase string "<<s2<<endl;

	s2.replace(6,5,"Bangladesh");
	cout<<"Replace string = "<<s2<<endl;

	//s2.insert(5,"Pias");

	// for (auto it = s2.begin(); it !=s2.end();++it) {
    //     cout << *it << endl;
    // }


	return 0;
}