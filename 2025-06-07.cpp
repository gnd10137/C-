//#include <cstdio>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int t[1001];
//	int n;
//	scanf("%d",&n);
//	for (int i = 1; i <= n; i++)
//		scanf("%d", &t[i]);
//	sort(t + 1, t + n + 1);
//	int ans = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		ans += t[i] * (n - i);
//	}
//	printf("%d",ans);
//	return 0;
//}

//#include <cstdio>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int c[100001];
//	int n, m;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &c[i]);
//	}
//	scanf("%d", &m);
//	sort(c, c + n);
//	int left = 0, right = n - 1;
//	while (left < right)
//	{
//		if (c[left] + c[right] == m)
//		{
//			printf("%d %d", c[left], c[right]);
//			return 0;
//		}
//		else if (c[left] + c[right] < m)
//			left++;
//		else
//			right--;
//	}
//	printf("-1");
//	return 0;
//}

//#include <cstdio>
//#include <stack>
//using namespace std;
//
//int main()
//{
//	int t;	
//	scanf("%d", &t);
//	while (t--) 
//	{
//		char str[51];
//		scanf("%s", str);
//		getchar();
//		int check = 0;
//		stack <char> s;
//		for (int i = 0; str[i]; i++)
//		{
//			if (str[i] == '(')
//			{
//				s.push(str[i]);
//			}
//			else
//			{
//				if (s.empty() || s.top() == ')')
//				{
//					check = 1;
//					break;
//				}
//				else
//					s.pop();
//			}
//		}
//		if (!s.empty() || check)
//			printf("NO\n");
//		else
//			printf("YES\n");
//	}
//	return 0;
//}

//#include <cstdio>
//#include <queue>
//using namespace std;
//
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	queue <int> q;
//	for (int i = 1; i <= n; i++)
//	{
//		q.push(i);
//	}
//	while (!q.empty())
//	{
//		for (int i = 0; i < m - 1; i++)
//		{
//			q.push(q.front());
//			q.pop();
//		}
//		printf("%d ", q.front());
//		q.pop();
//	}
//}

#include <cstdio>
#include <vector>
using namespace std;

int main()
{
	vector <int> v;
	v.push_back(12);
	v.push_back(5);
	v.push_back(96);
	for (int i = 0; i < v.size(); i++)
		printf("%d\n", v[i]);
	return 0;
}
