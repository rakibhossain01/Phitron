#include<bits/stdc++.h>
using namespace std;

void fun(int* &p/* say Refference */){ //(int* p) not refference
	//*p = 100; // Derefference kora hoisay
	int y = 200;

	p = &y;

	//cout<<"In fun : "<< *p <<endl;
	cout<<"In fun : "<< &p <<endl;
}


int main(){
	int x = 10;
	int* p = &x;

	fun(p);
	//cout<<"In main : "<< *p<<endl;
	//cout<<"x : "<<x<<endl;
	//cout<<*p<<endl;
	cout<<"In main : "<< &p <<endl;
}
