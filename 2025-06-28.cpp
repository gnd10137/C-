//#include <cstdio>
//#include <algorithm>
//using namespace std;
//
//const int M = 100100;
//int n, m, x[M], y[M], X, Y;
//int s;
//int main()
//{
//	int a;
//	scanf("%d%d",&n, &m);
//	for (int i = 0; i < m; ++i)
//		scanf("%d%d",&x[i], &y[i]);
//	sort(x, x + m);
//	sort(y, y + m);
//	X = x[m / 2];
//	Y = y[m / 2];
//	s = 0;
//	for (int i = 0; i < m; ++i)
//		s += abs(X - x[i]) + abs(Y - y[i]);
//	printf("%d\n", s);
//	return 0;
//	
//}

//#include <cstdio>
//#include <algorithm>
//using namespace std;
//
//int N, M, L;
//int X[1000], Y[1000];
//int Fx[1000], Fy[1000];
//
//int main()
//{
//	int i, j, k;
//	int w, h;
//	int cnt;
//	int ans = 0;
//	scanf("%d%d%d",&N, &L, &M);
//	for (int i = 0; i < M; i++)
//	{
//		scanf("%d%d",&Fx[i], &Fy[i]);
//		X[i] = Fx[i];
//		Y[i] = Fy[i];
//	}
//	sort(X, X + M);
//	sort(Y, Y + M);
//	L /= 2;
//	
//	for (int w = 1; w < L; w++)
//	{
//		h = L - w;
//		for (int i = 0; i < M; i++)
//		{
//			for (int j = 0; j < M; j++)
//			{
//				cnt = 0;
//				for (int k = 0; k < M; k++)
//				{
//					if (inside(X[i], X[i] + w, Fx[k]) && inside(Y[j], Y[j] + h, Fy[k]))
//						cnt++;
//				}
//				if (ans < cnt)
//					ans = cnt;
//			}
//		}
//	}
//	printf("%d", ans);
//	return 0;
//}

//#include <cstdio>
//#include <algorithm>
//#define N 200010
//using namespace std;
//
//struct data
//{
//	int num, size, color;
//	bool operator< (const data& other) const{
//		return size < other.size;
//	}
//};
//int n, sum[N], total, ans[N];
//data b[N];
//bool cmp (const data left, const data right)
//{
//	return left.size < right.size;
//}
//int main()
//{
//	int i, j = 1;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d%d",&b[i].color, &b[i].size);
//		b[i].num = i;
//	}
//	sort(b + 1, b + n + 1);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; b[j]< b[i]; j++)
//		{
//			sum[b[j].color] += b[j].size;
//			total += b[j].size;
//		}
//		ans[b[i].num] = total - sum[b[i].color];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		printf("%d\n", ans[i]);
//	return 0;
//	}
//}

//#include <algorithm>
//#include <cstdio>
//#include <cstring>
//using namespace std;
//struct Person
//{
//	char name[11];
//	int kor, eng, math;
//};
//bool cmp(const Person u, const Person v)
//{
//	if (u.kor > v.kor)
//	{
//		return true;
//	}
//	else if (u.kor == v.kor)
//	{
//		if (u.eng < v.eng)
//		{
//			return true;
//		}
//		else if (u.eng == v.eng)
//		{
//			if (u.math > v.math)
//			{
//				return true;
//			}
//			else if (u.math == v.math)
//			{
//				return strcmp(u.name, v.name) <= 0;
//			}
//		}
//	}
//	return false;
//}
//Person a[100000];
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s %d %d %d", a[i].name, &a[i].kor, &a[i].eng, &a[i].math);
//	}
//	sort (a, a + n, cmp);
//	for (int i = 0; i < n; i++)
//	{
//		printf("%s\n", a[i].name);
//	}
//	return 0;
//}

#include <cstdio>
#include <algorithm>
using namespace std;
int arr[9];

int h;
int sum = 0;

int main()
{
	for (int i = 0; i < 9; i++)
{
	scanf("%d",&arr[i]);
	sum += arr[i];
}
sort(arr, arr+9);
for (int i = 0; i < 9; i++)
{
	for (int j = 0; j < 9; j++)
	{
		if (i == j)
			continue;
		if (sum - arr[i] - arr[j] == 100)
		{
			for(int k = 0; k<9; k++){
				if (k == i || k ==- j) continue;
				printf("%d\n", arr[k]);
			}
			return 0;
		}
	}
}
}
