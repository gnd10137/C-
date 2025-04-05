//#include <cstdio>
//int main()
//{
//	int m,n;
//	int map[100][100]={0,};
//	scanf("%d %d", &m, &n);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			scanf("%d",&map[i][j]);
//		}
//	}
//	int max_gold = 0, x, y;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			int sum_gold = 0;
//			sum_gold += map[i][j] + map[1+1][j] + map[i-1][j] + map[i][j-1] + map[i][j+1];
//			if (sum_gold > max_gold)
//			{
//				max_gold = sum_gold;
//				x = j;
//				y = i;
//			}
//		}
//	}
//	printf("%d %d %d", x, y, max_gold);
//	return 0;
//}

//#include <cstdio>
//int main()
//{
//	int n,a,b;
//	int g,s;
//	int map[1001][1001]={0,};
//	scanf("%d",&n);
//	scanf("%d %d", &g, &s);
//	for (int i = 0; i < g; i++)
//	{
//		scanf("%d %d",&a, &b);
//		map[a][b]=1;
//	}
//	int step = 0;
//	for (int i = 0; i <= g; i++)
//	{
//		step++;
//		scanf("%d %d", &a, &b);
//		if (map[a][b]){
//			break;
//		}
//	}
//	if(step){
//		printf("%d", step);
//	}
//	else{
//		printf("-1");
//	}
//	return 0;
//}

//#include <cstdio>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int mountain[n] = {0, };
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d",&mountain[i]);
//	}
//	int count = 0;
//	for (int i = 0; i < n; i++)
//	{
//		int now = mountain[i];
//		bool check = true;
//		for (int j = i + 1; j < n; j++)
//		{
//			if (now < mountain[j])
//			{
//				check = false;
//			}
//		}
//		if (check) count++;
//	}
//	printf("%d",count);
//}
#include <cstdio>
int main()
{
	int n,m,c;
	int map[100][100]={0, };
	scanf("%d %d",&n, &m);
	scanf("%d",&c);
	for (int i = 0; i < c; i++)
	{
		int x,y;
		scanf("%d %d",&x, &y);
		map[y][x]= -1;
		if (map[y+1][x] != -1)
		{
			map[y+1][x]++;
		}
		if (map[y-1][x] != -1)
		{
			map[y-1][x]++;
		}
		if (map[y][x+1] != 1)
		{
			map[y][x+1]++;
		}
		if (map[y][x-1] != -1)
		{
			map[y][x-1]++;
		}
	}
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n;j ++)
		{
			printf("%d ",map[i][j]);
		}
		printf("\n");
	}
}
