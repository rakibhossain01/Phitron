#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[100005];
bool vis[100005];
int parent[100005];
int level[100005];

void bfs(int src) {
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;

    while (!q.empty()) {
        int par = q.front();
        q.pop();

        for (int child : adj_list[par]) {
            if (!vis[child]) {
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
                parent[child] = par;
            }
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;

    while (e--) {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));
    memset(level, -1, sizeof(level));

    int src = 1, dst = n;
    bfs(src);

    if (!vis[dst]) {
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }

    vector<int> path;
    int node = dst;

    while (node != -1) {
        path.push_back(node);
        node = parent[node];
    }

    reverse(path.begin(), path.end());

    cout << path.size() << endl;
    for (int x : path) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
