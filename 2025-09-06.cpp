//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <queue>
//using namespace std;
//
//vector<vector<int, int>> adj;
//vector<bool> visited;
//
//void dps(int u){
//	visited[u] = true;
//	cout << u << " ";
//	for (int v : adj[u]){
//		if (!visited[v]){
//			dfs(v);
//		}
//	}
//}
//void bfs(int startNode) {
//    queue<int> q;
//    q.push(startNode);
//    visited[startNode] = true;
//    while (!q.empty()) {
//        int u = q.front();
//        q.pop();
//        cout << u << " ";
//        for (int v : adj[u]) {
//            if (!visited[v]) {
//                visited[v] = true;
//                q.push(v);
//            }
//        }
//    }
//}

//#include <cstdio>
//#include <vector>
//using namespace std;
//
//vector<pair<int,int>> graph[1001];
//int result;
//int target;
//
//void dfs(int from, int val, vector<bool> &check)
//{
//    check[from] = true;
//
//    if (from == target) {
//        result = val;
//        return;
//    }
//    for (int i = 0; i < graph[from].size(); i++) {
//        int next_node = graph[from][i].first;
//        int next_val = graph[from][i].second;
//        if (!check[next_node])
//            dfs(next_node, val + next_val, check);
//    }
//}
//
//int main()
//{
//    int N, M;
//    scanf("%d %d", &N, &M);
//
//    for (int i = 0; i < N - 1; i++){
//    	int from, to, cost;
//        scanf("%d %d %d", &from, &to, &cost);
//        graph[from].push_back({to, cost});
//        graph[to].push_back({from, cost});
//	}
//
//    for (int i = 0; i < M; i++){
//    	int u, v;
//        scanf("%d %d", &u, &v);
//        vector<bool> check(N + 1, false);
//        result = 0;
//        target = v;
//        dfs(u, 0, check);
//        printf("%d\n", result);
//	}
//    return 0;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//int n;
//vector<int>V;
//vector<pair<int,int> >node[10001];
//int maxVal=-1, maxnode=0;
//void dfs(int now, int val);
//int main(){
//    cin>>n;
//    V.resize(n+1,0);
//    int s,e,w;
//    for(int i=0; i<n-1; i++){
//        cin>>s>>e>>w;
//        node[s].push_back(make_pair(e,w));
//        node[e].push_back(make_pair(s,w));
//    }
//    dfs(1,0);
//    V.assign(n+1,0);
//    maxVal=-1;
//    dfs(maxnode,0);
//    cout<<maxVal<<endl;
//}
//void dfs(int now, int val){
//
//    V[now]=1;
//    if(maxVal < val){
//        maxVal=val;
//        maxnode=now;
//    }
//    for(int i=0; i<node[now].size();i++){
//        if(V[node[now][i].first]==1)
//            continue;
//        dfs(node[now][i].first,val+node[now][i].second);
//    }
//}

//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//vector<pair<int,int>> g[100001];
//int V;
//
//pair<int,int> bfs(int s) {
//    vector<int> d(V+1,-1);
//    queue<int> q;
//    q.push(s);
//    d[s]=0;
//    int mx=0,node=s;
//    while(!q.empty()){
//        int u=q.front(); q.pop();
//        for(int i=0;i<g[u].size();i++){
//            int v=g[u][i].first,w=g[u][i].second;
//            if(d[v]==-1){
//                d[v]=d[u]+w;
//                q.push(v);
//                if(d[v]>mx){mx=d[v]; node=v;}
//            }
//        }
//    }
//    return {node,mx};
//}
//
//int main(){
//    cin>>V;
//    for(int i=0;i<V;i++){
//        int a;cin>>a;
//        while(1){
//            int b;cin>>b;
//            if(b==-1) break;
//            int w;cin>>w;
//            g[a].push_back({b,w});
//        }
//    }
//    pair<int,int> p=bfs(1);
//    pair<int,int> q=bfs(p.first);
//    cout<<q.second<<"\n";
//}
