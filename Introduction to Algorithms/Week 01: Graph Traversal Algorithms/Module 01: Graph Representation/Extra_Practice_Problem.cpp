// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n,e;
// 	cin>>n>>e;

// 	int adj_mat[n][n];

// 	memset(adj_mat,0,sizeof(adj_mat));

// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<n;j++){
// 			if(i==j){
// 				adj_mat[i][j] = 1;
// 			}
// 		}
// 	}
// 	for(int i=0;i<e;i++){
// 		int a,b;
// 		cin>>a>>b;

// 		adj_mat[a-1][b-1] = 1;
//         adj_mat[b-1][a-1] = 1;
// 	}
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<n;j++){
// 			cout<<adj_mat[i][j]<<" ";
// 		}
// 		cout<<endl;
// 	}

// 	return 0;
// }
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,e;
	cin>>n>>e;

	vector<pair<int, int>> edge_list;

	for(int i=0;i<e;i++){
		int a,b;
		cin>>a>>b;

		edge_list.push_back({a,b});
	}
	for(auto p : edge_list){
		cout << p.first << " " << p.second << endl;
	}
}
*/
