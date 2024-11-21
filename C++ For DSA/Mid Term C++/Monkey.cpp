#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;

	while(getline(cin,s)){

		//s.erase(remove(s.begin(),s.end(),' '),s.end());
		string t = "";

		sort(s.begin(),s.end());

		for (char c : s) {
            if (c != ' '){
                t+=c;
            }
        }

		cout<<t<<endl;
	}

	return 0;
}