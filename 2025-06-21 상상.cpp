//#include <cstdio>
//int n = 10;
//int a[11], b[11];
//
//int main()
//{
//	int i;
//	for (int i = 1; i <= n; i++)
//		scanf("%d", &a[i]);
//	for (int i = 1; i <= n; i++)
//		scanf("%d", &b[i]);
//		
//	int awin, bwin, draw;
//	awin = bwin = draw= 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (a[i] > b[i]) awin++;
//		else if (a[i] < b[i]) bwin++;
//		else draw++;
//	}
//	if (awin > bwin) printf("A\n");
//	else if (awin < bwin) printf("B\n");
//	else printf("D\n");
//	return 0;
//}

//#include <cstdio>
//#include <stack>
//using namespace std;
//
//char a[100001];
//
//int main()
//{
//	scanf("%s", a);
//	stack <int> s;
//	int ans = 0;
//	for (int i = 0; a[i]; i++)
//	{
//		if (a[i] == '(')
//		{
//			s.push(i);
//		}
//		else
//		{
//			if (s.top() + 1 == i)
//			{
//				s.pop();
//				ans += s.size();
//			}
//			else
//			{
//				s.pop();
//				ans += 1;
//			}
//		}
//	}
//	printf("%d",ans);
//	return 0;
//}

#include <cstdio>
#include <stack>
using namespace std;

stack <pair<int, int>> s;

int ans[500001];
int main()
{
	int n,x;
	scanf("%d", &n);
	s.push({999999999, 0});
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&x);
		while (s.top().first < x)
		{
			s.pop();
		}
		ans[i] = s.top().num;
		s.push({x, i+1});
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d ", ans[i]);
	}
	return 0;
}
