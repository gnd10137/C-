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
//
//int gcd(int a, int b)
//{
//	if (a % b == 0)
//		return b;
//	else
//		return gcd(b, a % b);
//}
//
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
//	{
//		dist[i] = pos[i + 1] - pos[i];
//	}
//	int g = dist[0];
//	for (int i = 1; i < n; i++)
//	{
//		g = gcd(dist[i], g);
//	}
//	int ans = 0;
//	for (int i = 0; i < n; i++)
//	{
//		ans += dist[i] / g - 1;
//	}
//	printf("%d", ans);
//	return 0;
//}

//#include <cstdio>
//int main()
//{
//	int a, b, c, d, e, f;
//	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
//	int ans = 0;
//	ans = d + e + f;
//	a -= 11 * e;
//	b -= 5 * d;
//	if (c > 0)
//	{
//		ans += (c - 1) / 4 + 1;
//		c %= 4;
//		if (c)
//		{
//			a -= 8 - c;
//			b -= 7 - 2 * c;
//		}
//	}
//	if (b > 0)
//	{
//		ans += (b - 1) / 9 + 1;
//		b %= 9;
//		if (b)
//			a -= 36 - b * 4;
//	}
//	else
//		a += b * 4;
//	if (a > 0)
//		ans += (a - 1) / 36 + 1;
//	printf("%d", ans);
//	return 0;
//}

//#include <cstdio>
//
//int n, a[1000000], d[1000001];
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

//#include <cstdio>
//#include <algorithm>
//using namespace std;
//
//int n, a[10002], b[10002];
//pair<int, int> res[2];
//
//bool check()
//{
//	for (int i = 1; i <= n; i++)
//	{
//		if (a[i] != i) return false;
//	}
//	return true;
//}
//bool process(int first, int last, int step)
//{
//	int cnt = 0;
//	for (int i = first; i != last; i = i + step)
//	{
//		int s = 0, f = 0;
//		if (a[i] != i)
//		{
//			s = i;
//			for (int j = 1; j <= n; j++)
//			{
//				if (a[j] == s)
//				{
//					f = j;
//					break;
//				}
//			}
//			reverse(a + min(s, f), a + max(s, f) + 1);
//			res[cnt] = { min(s, f), max(s, f) };
//			cnt++;
//			if (cnt > 2)
//				return false;
//			if (check())
//			{
//				if(cnt == 1)
//					printf("1 1\n");
//				for (int i = 0; i < cnt; i++)
//					printf("%d %d\n", res[i].first, res[i].second);
//				return true;
//			}
//		}
//	}
//	return false;
//}
//int main()
//{
//	scanf("%d", &n);
//	int i;
//	for (i = 1; i <= n; ++i)
//	{
//		scnaf("%d", &a[i]);
//		b[i] = a[i];
//	}
//	if (check())
//	{
//		printf("1 1\n");
//		printf("1 1\n");
//	}
//	if (process(1, n, 1))
//		return 0;
//	for (i = 1 i <= n; ++i)
//	{
//		a[i] = b[i];
//	}
//	process(n, 1, -1);
//	return 0;
//}

#include <cstdio>
#include <algorithm>
using namespace std;

pair<int, int> d[500000];

int lis[500000];
bool cmp(const pair<int, int left, const pair<int, int> right)
{
	if (left.first == right.first)
		return left.second > right.second;
	return left.first < right.first;
}
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int num;
		scanf("%d %d %d", &num, &d[i].first, &d[i].second);
	}
	sort(d, d + n, cmp);
	int m = 1;
	for (int i = 1; i < n; i++)
	{
		if (!(d[i].first == d[i - 1].first && d[i].second == d[i - 1].second))
		{
			d[m++] = d[i];
		}
	}
	int row = 1;
	lis[0] = d[0].second;
	
	for (int i = 1; i < m; i++)
	{
		int x = d[i].second;
		if (x <= lis[now - 1])
		{
			lise[now++] = x;
			continue;
		}
		int l = 0, r = now - 1;
		while (l <= r)
		{
			int m = (l + r) / 2;
			if (lis[m] >= x)
				l = m - 1;
		}
		lis[r + 1] = x;
	}
	printf("%d", now);
	return 0;
}
