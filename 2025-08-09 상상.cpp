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
//	y = (q + t) % (h * 2);
//	if (y > h)
//		y = h * 2 - y;
//	
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
//			for (int j = i * j; j <= 1000001; j += i)
//			{
//				check[j] = true;
//			}
//		}
//	}
//	int m, n;
//	scanf("%d%d", &m, &n);
//	for (int i = m; i <= n; i++)
//	{
//		if (check[i] = false)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//#include <cstdio>
//
//int gcd(int a, int b)
//{
//	if (a % b == 0)
//		return b;
//	else
//		return gcd(b, a % b);
//}
//int pos[100000], dist[100000];
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &pos[i]);
//	}
//	for (int i = 0; i < n - 1; i++)
//		dist[i] = pos[i + 1] - pos[i];
//	
//	int g = dist[0];
//	for (int i = 1; i < n; i++)
//		g = gcd(dist[i], g);
//		
//	int ans = 0;
//	for (int i = 0; i < n; i++)
//		ans += dist[i] / g - 1;
//	printf("%d", ans);
//	return 0;
//}

#include <cstdio>
int n, a[1000000], d[1000001];
int ans;

int main()
{
	int i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	ans = n;
	
	for (i = 0; i < n; i++)
	{
		d[a[i]] = d[a[i] - 1] + 1;
		if (ans > n - d[a[i]])
			ans = n - d[a[i]];
	}
	printf("%d", ans);
	return 0;
}
