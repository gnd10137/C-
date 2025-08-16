//#include <cstdio>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//pair <int, int> student[1000*1000];
//int cnt[1000*1000];
//
//int main()
//{
//	int n, m;
//	scanf("%d%d", &n, &m);
//	int index = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; i++)
//		{
//			int a;
//			scanf("%d", &a);
//			student[index++] = { a, i };
//		}
//	}
//	sort(student, student + n * m);
//	int num = 0;
//	int s = 0, e = 0;
//	int ans  =1234567890;
//	while (e < n * m)
//	{
//		if (cnt[student[e].second] == 0)
//			num++;
//		cnt[student[e].second]++;
//		while (num == n)
//		{
//			ans = min(ans, student[e].first - student[s].first);
//			cnt[student[s].second]--;
//			if (cnt[student[s].second] == 0)
//				num--;
//			s++;
//		}
//		e++;
//	}
//	printf("%d", ans);
//	return 0;
//}

//#include <cstdio>
//int main()
//{
//	int w, h, p, q, t;
//	scanf("%d%d%d%d%d", &w, &h, &p, &q, &t);
//	int x, y;
//	x = (p + t) % (w * 2);
//	if (x > w)
//		x = w * 2 - x;
//	y = (q + t) % (h * 2);
//	if (y > h)
//		y = h * 2 - y;
//	printf("%d %d\n", x, y);
//	return 0;
//}

//#include <cstdio>
//int check[100001];
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
//	}	int m, n;
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
//int pos[100000], dist[100000];
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	
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
//	for (int i = 0; i < n - 1; i++)
//		ans += dist[i] / g - 1;
//	
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
//}

//#include <cstdio>
//int n, a[1000000], d[1000001];
//int ans;
//
//int main()
//{
//	int i;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
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

#include <cstdio>
#include <algorithm>
using namespace std;

int n, a[10002], b[10002];
pair <int, int> res[2];

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
		int s = 0, f = 0;
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
			reverse (a + min(s, f), a + max(s, f) + 1);
			res[cnt] = { min(s, f), max(s, f) };
			cnt++;
			if (cnt > 2)
				return false;
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
int main()
{
	scanf("%d", &n);
	int i;
	for (int i = 1; i <= n; ++i)
	{
		scanf("%d", &a[i]);
		b[i] = a[i];
	}
	if (check())
	{
		printf("1 1\n");
		printf("1 1\n");
	}
	if (process(1, n, 1))
		return 0;
	for (int i = 1; i <= n; ++i)
	{
		a[i] = b[i];
	}
	process(n, 1, -1);
	return 0;
}
