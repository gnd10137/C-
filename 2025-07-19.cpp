//#include <cstdio>
//int main()
//{
//	int d[10001];
//	int start, end, death, n;
//	scanf("%d %d %d %d", &start, &end, &death, &n);
//	d[0] = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		d[i] = d[i - 1];
//		if (i >= start)
//			d[i] += d[i - start];
//		if (i >= end)
//			d[i] -= d[i - end];
//		d[i] = (d[i] + 1000) % 1000;
//	}
//	if (n - death >= 0)
//		printf("%d", (d[n] - d[n - death] + 1000) % 1000);
//	else
//		printf("%d", d[n]);
//}

//#include <cstdio>
//#include <algorithm>
//using namespace std;
//int a[301];
//int d[301][3];
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d", &a);
//	}
//	d[1][1] =  a[1];
//	for (int i = 2; i <= n; i++)
//	{
//		d[i][2] = d[i - 1][1] + a[i];
//		d[i][1] = max(d[i - 2][1], d[i - 2][2]) + a[i];
//	}
//	printf("%d\n", max(d[n][1], d[n][2]));
//	return 0;
//}

#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	int arr[101][101];
	int d, n;
	int dp[101][101];
	
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			scanf("%d", &arr[i - 1][j]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; i++)
		{
			dp[i][j] = 0;
		}
	}
	for(int i = 4; i>=0; i--)
	{
		for(int j = 0; j < i+1; j++){
			if(i == 0) {
				dp[i][j] = arr[i][j];
				continue;
			}
			dp[i][j] = max(dp[i+1][j], dp[i+1][j+1])+arr[i][j];
		}
	}
	printf("%d", dp[0][0]);
}
