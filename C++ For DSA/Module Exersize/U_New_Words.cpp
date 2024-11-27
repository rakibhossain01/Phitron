#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;

	int e=0,g=0,y=0,p=0,t=0;
	for(int i=0;i<s.size();i++){
		if((char)tolower(s[i])=='e'){
			e++;
		}
		else if((char)tolower(s[i])=='g'){
			g++;
		}
		else if((char)tolower(s[i])=='y'){
			y++;
		}
		else if((char)tolower(s[i])=='p'){
			p++;
		}
		else if((char)tolower(s[i])=='t'){
			t++;
		}
	}
	if(e==0 || g==0 || y==0 || p==0 || t==0){
		cout<<0<<endl;
	}
	else{
		cout<<min({e, g, y, p, t})<<endl;
	}

	return 0;
}