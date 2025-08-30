//#include <cstdio>
//int n, a[1000000], d[10000001];
//int ans;
//
//int main()
//{
//	int i;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//		scanf("%d", &a[i]);
//	ans = n;
//	
//	for (int i = 0; i < n; i++)
//	{
//		d[a[i]] = d[a[i] - 1] + 1;
//		if (ans > n - d[a[i]])
//			ans = n - d[a[i]];
//	}
//	printf("%d", ans);
//	return 0;
//}

//void dfs
//{
//	dfs;
//}
//vector<int> a[1001];
//bool check[1001];
//
//void dfs(int node)
//{
//	check[node] = true;
//	
//	for (int i = 0; i < a[node].size(); i++)
//	{
//		int next = a[node][i];
//		if (check[next] == false)
//		{
//			dfs(next);
//		}
//	}
//}
//bool check[1001];
//
//void bfs(int start)
//{
//	queue<int> q;
//	
//	q.push(start);
//	check[start] = true;
//	
//	while (!q.empty())
//	{
//		int node = q.front();
//		q.pop();
//		
//		for (int i = 0; i < a[node].size(); i++)
//		{
//			int next = a[node][i];
//			if (check[next] == false)
//			{
//				check[next] = true;
//				q.push(next);
//			}
//		}
//	}
//}

//#include <cstdio>
//#include <vector>
//using namespace std;
//
//vector<int> a[1001];
//bool check[1001];
//void dfs(int node)
//{
//	check[node] = true;
//	for (int i = 0; i < a[node].size(); i++)
//	{
//		int next = a[node][i];
//		if (check[next] == false)
//		{
//			dfs(next);
//		}
//	}
//}
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i < m; i++)
//	{
//		int u, v;
//		scanf("%d %d", &u, &v);
//		a[u].push_back(v);
//		a[v].push_back(u);
//	}
//	int ans = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (check[i] == false)
//		{
//			dfs(i);
//			ans++;
//		}
//	}
//	printf("%d", ans);
//	return 0;
//}

#include <cstdio>
#include <algorithm>
using namespace std;

int n, a[10002], b[10002];
pair<int, int> res[2];

bool check()
{
	for (int i = 1; i <= n; i++)
	{
		if (a[i] != i) return false;
	}
	return true;
}
bool process(int first, int last, int step)
{
	int cnt = 0;
	for (int i = first; i != last; i = i + step)
	{
		int s = 0; f = 0;
		if (a[i] != i)
		{
			s = i;
			for (int j = 1; j <= n; j++)
			{
				if (a[j] == s)
				{
					f = j;
					break;
				}
			}
			reverse(a + min(s, f), a + max(s, f) + 1);
			res[cnt] = { min(s, f), max(s, f) };
			cnt++;
			if (check())
			{
				if (cnt == 1)
					printf("1 1\n");
				for (int i = 0; i < cnt; i++)
					printf("%d %d\n", res[i].first, res[i].second);
				return true;
			}
		}
	}
	return false;
}
