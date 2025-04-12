//#include <cstdio>
//int main()
//{
//	int map[1000][1000] = {
//        {0, 0, 2, 0, 6, 0, 6, 0},
//        {0, 5, 3, 7, 5, 4, 1, 4},
//        {9, 6, 1, 2, 7, 0, 5, 0},
//        {0, 1, 5, 6, 0, 3, 2, 7}
//    };
//
//    int dx[] = {0, -1, 1, 0, 0};
//    int dy[] = {0, 0, 0, -1, 1};
//
//    int max_sum = 0;
//    int max_x = 0, max_y = 0;
//
//    for (int i = 0; i < 1000; i++) {
//        for (int j = 0; j < 1000; j++) {
//            int sum = 0;
//            for (int d = 0; d < 5; d++) {
//                int ni = i + dx[d];
//                int nj = j + dy[d];
//
//                if (ni >= 0 && ni < 1000 && nj >= 0 && nj < 1000) {
//                    sum += map[ni][nj];
//                }
//            }
//            if (sum > max_sum) {
//                max_sum = sum;
//                max_x = j;
//                max_y = i;
//            }
//        }
//    }
//
//    printf("최대 황금을 캘 수 있는 위치: 가로:%d 세로:%d\n", max_x, max_y);
//    printf("최대 황금 양: %d\n", max_sum);
//
//    return 0;
//}

//#include <cstdio>
//int main()
//{
//	int map[1001][1001] = {0, };
//	int n, t, k;
//	scanf ("%d",&n);
//	scanf ("%d %d", &t, &k);
//	for (int i = 0; i < t; i++)
//	{
//		int tx, ty;
//		scanf ("%d %d",&tx,&ty);
//		map[ty][tx] = 1;
//	}
//	int check = 0;
//	for (int i = 0; i <= k; i++)
//	{
//		int kx, ky;
//		scanf ("%d %d",&kx, &ky);
//		if (map[ky][kx] && !check)
//		{
//			check = i;
//		}
//	}
//	if (check) printf("%d",check);
//	else printf("-1");
//	return 0;
//}

#include <cstdio>
#include <vector>
using namespace std;
int main()
{
	vector<int> v[10001];
	int n, t, k;
	scanf("%d",&n);
	scanf("%d %d",&t, &k);
	for (int i = 0; i < t; i++)
	{
		int tx,ty;
		scanf("%d %d",&tx, &ty);
		v[tx].push_back(ty);
	}
	int check = 0;
	for (int i = 1; i <= k; i++)
	{
		int kx, ky;
		scanf("%d %d",&kx, &ky);
		for (int j = 0; j < v[kx].size(); j++)
		{
				if (v[kx][j] == ky && check)
				{
					check = 1;
				}
		}
	}
	if (check) printf("%d", check);
	else printf ("-1");
	return 0;
}
