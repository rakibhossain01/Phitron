#include<bits/stdc++.h>
using namespace std;

class Student{
public:
	string name;
	int roll;
	Student(string name,int roll){
		(*this).name = name;
		(*this).roll = roll;
	}
	void hello(){
		cout<<"Hello";
	}
};

int main(){
	Student sakib("Sakib Ahmed",23);
	cout<<sakib.name<<endl;

	sakib.hello();

	return 0;
}