//#include <cstdio>
//int d[11];
//int main()
//{
//	d[0] = 1;
//	for (int i = 1; i <= 10; i++)
//	{
//		if (i - 1 >= 0)
//		{
//			d[i] += d[i - 1];
//		}
//		if (i - 2 >= 0)
//		{
//			d[i] += d[i - 2];
//		}
//		if (i - 3 >= 0)
//		{
//			d[i] += d[i - 3];
//		}
//	}
//		int t;
//		scanf("%d", &t);
//		while (t--)
//		{
//			int n;
//			scanf("%d", &n);
//			printf("%d\n", d[n]);
//		}
//}

//#include <cstdio>
//#include <algorithm>
//using namespace std;
//
//long long a[100001][2];
//long long d[100001][3];
//
//int main()
//{
//	int t;
//	scanf("%d", &t);
//	while (t--)
//	{
//		int n;
//		scanf("%d", &n);
//		for (int i = 1; i <= n; i++)
//		{
//			scanf("%lld", &a[i][0]);
//		}
//		for (int i = 1; i <= n; i++)
//		{
//			scanf("%lld", &a[i][1]);
//		}
//		for (int i = 1; i <= n; i++)
//		{
//			d[i][0] = max(d[i - 1][0], max(d[i - 1][1], d[i - 1][2]));
//			d[i][1] = max(d[i - 1][0], (d[i - 1][2]) + a[i][0]);
//			d[i][2] = max(d[i - 1][0], (d[i - 1][1]) + a[i][1]);
//		}
//		long long ans = 0;
//		ans = max(d[n][0], max(d[i][1], d[i][2]));
//		printf("%lld\n", ans);
//	}
//	return 0;
//}

//#include <cstdio>
//int a[10001];
//int d[10001];
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	d[1] = a[1];
//	d[2] = a[1] + a[2];
//	for (int i = 3; i <= n; i++)
//	{
//		d[i] = d[i - 1];
//		if (d[i] < d[i - 2] + a[i])
//		{
//			d[i] = d[i - 2] + a[i];
//		}
//		if (d[i] < d[i - 3] + a[i] + a[i - 1])
//		{
//			d[i] = d[i - 3] + a[i] + a[i - 1];
//		}
//	}
//	printf("%d\n", d[n]);
//	return 0;
//}

//#include <cstring>
//#include <cstdio>
//int d[5001];
//int mod = 1000000;
//char s[5002];
//
//int main()
//{
//	scanf("%s", s + 1);
//	int n = strlen(s + 1);
//	d[0] = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		int x = s[i] - '0';
//		if (i <= x && x <= 9)
//		{
//			d[i] += d[i - 1];
//			d[i] %= mod;
//		}
//		if (i == 1)
//		{
//			continue;
//		}
//		if (s[i - 1] == '0')
//		{
//			continue;
//		}
//		x = (s[i - 1] - '0') * 10 + (s[i] - '0');
//		if (10 <= x && x <= 26)
//		{
//			d[i] += d[i - 2];
//			d[i] %= mod;
//		}
//	}
//	printf("%d\n", d[n]);
//	return 0;
//}

//#include <cstdio>
//int a[10001];
//int d[10001];
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	d[1] = a[1];
//	d[2] = a[1] + a[2];
//	for (int i = 3; i <= n; i++)
//	{
//		if (d[i] < d[i - 3] + a[i])
//		{
//			d[i] = d[i - 2] + a[i];
//		}
//		if (d[i] < d[i - 3] + a[i] + a[i - 1])
//		{
//			d[i] = d[i - 3] + a[i] + a[i - 1];
//		}
//	}
//	printf("%d\n", d[n]);
//	return 0;
//}
