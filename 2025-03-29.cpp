//#include <cstdio>
//#include <vector>
//using namespace std;
//int main()
//{
//	int A[10];
//	int B[10];
//	for (int i = 0; i < 10; i++)
//	{
//		scanf ("%d",&A[i]);
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d",&B[i]);
//	}
//	int a_score = 0;
//	int b_score = 0;
//	int last_winner = -1;
//	
//	for (int i = 0; i < 10; i++)
//	{
//		if (A[i] == B[i])
//		{
//			a_score += 1;
//			b_score += 1;
//		}
//		else if (A[i] > B[i])
//		{
//			a_score += 3;
//			last_winner = 0;
//		}
//		else if (A[i] < B[i])
//		{
//			b_score += 3;
//			last_winner = 1;
//		}
//	}
//	if (a_score > b_score)
//	{
//		printf("%d %d\n",a_score,b_score);
//		printf("A");
//	}
//	else if (a_score < b_score)
//	{
//		printf("%d %d\n",a_score,b_score);
//		printf("B");
//	}
//	else
//	{
//		if (last_winner==0)
//		{
//			printf("%d %d\n",a_score,b_score);
//			printf("A");
//		}
//		else if(last_winner==1)
//		{
//			printf("B");
//		}
//	}
//}

//#include <cstdio>
//#include <vector>
//using namespace std;
//int main()
//{
//	int n,m;
//	int cur_x, cur_y;
//	scanf("%d %d",&n,&m);
//	int map[n][m];
//	
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			int temp;
//			scanf("%d",&temp);
//			map[i][j] = temp;
//			if (temp == 2)
//			{
//				cur_x = j;
//				cur_y = i;
//			}
//		}
//	}
//	while (!(map[cur_y+1][cur_x] && map[cur_y][cur_x+1]))
//	{
//	if (! map[cur_y+1][cur_x]) cur_y++;
//	else if (! map[cur_y][cur_x+1]) cur_x++;
//	}
//	printf("%d %d",cur_x, cur_y);
//}

#include <cstdio>
int main()
{
	int num_city, num_info;
	scanf("%d %d",&num_city, &num_info);
	int map[101][101] = { 0 };
	for (int i = 0 ;i < num_info; i++)
	{
		int c1,c2,car;
		scanf("%d %d %d",&c1,&c2,&car);
		if (map[c1-1][c2-1] == 0 || map[c1-1][c2-1] < car)
		map[c1-1][c2-1] = car;
	}
	
		for (int j = 0; j < num_city; j++)
		{
			printf("%d ",map[i][j]);
		}
		printf("\n");
	return 0;
}
