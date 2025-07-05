//#include <cstdio>
//#include <algorithm>
//using namespace std;
//
//const int M = 100100;
//int n, m, x[M], y[M], X, Y;
//int s;
//
//int main()
//{
//	int i;
//	scanf("%d%d", &n, &m);
//	for (int i = 0; i < m; ++i)
//		scanf("%d%d", &x[i], &y[i]);
//	
//	sort(x, x + m);
//	sort(y, y + m);
//	
//	X = x[m / 2];
//	Y = y[m / 2];
//	
//	s = 0;
//	for (int i = 0; i < m; ++i)
//		s += abs (X - x[i]) + abs(Y - y[i]);
//	printf("%d\n", s);
//	return 0;
//}

#include <cstdio>
#include <algorithm>
#define N 200110
using namespace std;

struct data
{
	int num, size, color;
};

int n, sum[N], total, ans[N];
data b[N];

bool cmp(const data left, const data right)
{
	return left.size < right.size;
}
