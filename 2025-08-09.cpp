//#include <cstdio>
//int main()
//{
//	int w, h, p, q, t;
//	scanf("%d%d%d%d%d", &w, &h, &p, &q, &t);
//	
//	int x, y;
//	x = (p + t) % (w * 2);
//	if (x > w)
//		x = w * 2 - x;
//	
//	y = (q + t) % (h * 2);
//	if (y > h)
//		y = h * 2 - y;
//	printf("%d %d\n", x, y);
//	return 0;
//}

//#include <cstdio>
//int check[1000001];
//int main()
//{
//	check[0] = 1;
//	check[1] = 1;
//	for (int i = 2; i * i <= 1000000; i++)
//	{
//		if (check[i] == false)
//		{
//			for (int j = i * i; j <= 1000001; j += i)
//			{
//				check[j] = true;
//			}
//		}
//	}
//	int m, n;
//	scanf("%d%d", &m, &n);
//	for (int i = m; i <= n; i++)
//	{
//		if (check[i] == false)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//#include <cstdio>
//using namespace std;
//
//int gcd(int a, int b)
//{
//	if (a % b == 0)
//		return b;
//	else
//		return gcd(b, a % b);
//}
//
//int main()
//{
//	int pos[100001];
//	int dist[100001];
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &pos[i]);
//	}
//	for (int i = 0; i < n - 1; i++)
//	{
//		dist[i] = pos[i + 1] - pos[i];
//	}
//	int g = dist[0];
//	for (int i = 1; i < n - 1; i++)
//	{
//		g = gcd(g, dist[i]);
//	}
//	int ans = 0;
//	for (int i = 0; i < n - 1; i++)
//	{
//		ans += dist[i] / g - 1;
//	}
//	printf("%d", ans);
//	return 0;
//}

//#include <cstdio>
//#include <iostream>
//using namespace std;
//
//struct Coord{
//	int x, y;
//};
//
//int main()
//{
//	int c, r, k;
//	cin >> c >> r >> k;
//	int dx[] = {0, 1, 0, -1};
//	int dy[] = {1, 0, -1, 0};
//	int dir = 0;
//	
//	if (k > c * r){
//		cout << 0;
//		return 0;
//	}
//	bool visited[c][r] = {false};
//	Coord now = {0, 0};
//	visited[0][0] = true;
//	int cnt = 1;
//	while (true)
//	{
//		int nx = now.x + dx[dir];
//		int ny = now.y + dy[dir];
//		if(nx >= c || nx < 0 || ny >= r || ny < 0 || visited[nx][ny]){
//			dir = (dir + 1) % 4;
//			nx = now.x + dx[dir];
//			ny = now.y + dy[dir];
//		}
//		now.x = nx;
//		now.y = ny;
//		visited[nx][ny] = true;
//		cnt++;
//		if(cnt == k) break;
//	}
//	cout << now.x + 1 << " " <<now.y + 1;
//	return 0;
//}

#include <cstdio>
int main()
{
	int n, j;
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
