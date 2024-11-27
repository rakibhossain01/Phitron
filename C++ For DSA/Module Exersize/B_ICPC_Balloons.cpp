#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;
		
        string s;
        cin >> s;

        bool solved[26] = {false}; 
        int total_balloons = 0;

        for (int i = 0; i < s.length(); i++) {

            char problem = s[i];
            int index = problem - 'A';

            if (!solved[index]) {
                total_balloons += 2;
                solved[index] = true;
            } 
            else {

                total_balloons += 1;
            }
        }
        cout << total_balloons << endl;
	}

	return 0;
}