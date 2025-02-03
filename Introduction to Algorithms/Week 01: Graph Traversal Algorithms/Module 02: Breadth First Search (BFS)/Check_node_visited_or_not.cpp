#include<bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool vis[1005];

void bfs(int src){
	queue<int> q;
	q.push(src);

	vis[src] = true;

	while(!q.empty()){
		int parent = q.front();

		q.pop();

		//cout<<parent<<endl;

		for(int child : adj_list[parent]){
			if(!vis[child]){
				q.push(child);

				vis[child] = true;
			}
		}
	}
}

int main(){
	int n,e;
	cin>>n>>e;

	while(e--){
		int a,b;
		cin>>a>>b;

		adj_list[a].push_back(b);
		adj_list[b].push_back(a);
	}
	memset(vis,0,sizeof(vis));

	int src,dst;
	cin>>src>>dst;

	bfs(src);

	if(vis[dst]){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}

	return 0;
}