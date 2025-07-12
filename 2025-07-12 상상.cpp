//#include <cstdio>
//#include <algorithm>
//#define INF 1234567890
//using namespace std;
//
//int d[5001];
//
//int main()
//{
//		int n;
//		scanf("%d", &n);
//		for (int i = 0; i < 5001; i++)
//			d[i] = INF;
//		d[3] = 1;
//		d[5] = 1;
//		for (int i = 6; i <= 5000; i++)
//		{
//			d[i] = min(d[i - 3], d[i - 5]) + 1;
//		}
//		if (d[n] < INF)
//			printf("%d", d[n]);
//		else
//			printf("-1");
//}

//#include <cstdio>
//int d[1001];
//
//int main()
//{
//	d[0] = 1;
//	d[1] = 1;
//	int n;
//	scanf("%d", &n);
//	for (int i = 2; i <= n; i++)
//	{
//		d[i] = d[i - 1] + d[i - 2];
//		d[i] %= 10007;
//	}
//	printf("%d\n", d[n]);
//	return 0;
//}

//#include <cstdio>
//int a[1001];
//int b[1001];
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			if (d[i] < d[i - j] + a[j])
//			{
//				d[i] = d[i - j] + a[j];
//			}
//		}
//	}
//	printf("%d\n", d[n]);
//	return 0;
//}

//#include <cstdio>
//int d[11];
//
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
//}

#include <cstdio>
#include <algorithm>
using namespace std;

long long a[100001][2];
long long d[100001][3];

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		for (int i = 1; i <= n; i++)
		{
			scanf("%lld", &a[i][0]);
		}
		for (int i = 1; i <= n; i++)
		{
			scanf("%lld", &a[i][1]);
		}
		for (int i = 1; i <= n; i++)
		{
			d[i][0] = max(d[i - 1][0], max(d[i - 1][1], d[i - 1][2]));
			d[i][1] = max(d[i - 1][0], (d[i - 1][2], a[i][0]));
			d[i][2] = max(d[i - 1][0], (d[i - 1][1], a[i][1]));
		}
		long long ans = 0;
		ans = max(d[n][0], max(d[i][1], d[i][2]));
		printf("%lld\n",ans);
	}
	return 0;
}
