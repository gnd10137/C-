//#include <cstdio>
//#include <iostream>
//#include <string>
//using namespace std;
//
//struct book
//{
//	string s;
//	int g, u;
//};
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	book b[1001];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> b[i].s;
//		scanf("%d %d",&b[i].g, &b[i].u);
//	}
//	string w;
//	cin >> w;
//	for (int i = 0; i < n; i++)
//	{
//		if (w == b[i].s)
//		{
//			printf("%d %d", b[i].g, b[i].u);
//			break;
//		}
//	}
//	return 0;
//}

//#include <cstdio>
//#include <utility>
//using namespace std;
//
//int main()
//{
//	int n, m;
//	scanf("%d %d",&n, &m);
//	pair <int, int> star[101];
//	for (int i = 0; i < m; i++)
//	{
//		int x, y;
//		scanf("%d %d",&x, &y);
//		star[i] = make_pair(x, y);
//	}
//	int sum = 0;
//	for (int i = 0; i < m; i++)
//	{
//		int a, b;
//		scanf("%d %d",&a, &b);
//		int diff_x = star[b].first - star[a].first;
//		int diff_y = star[b].second - star[a].second;
//		sum += diff_x * diff_x + diff_y * diff_y;
//	}
//	printf("%d", &sum);
//	return 0;
//}

//#include <cstdio>
//#include <stack>
//#include <queue>
//using namespace std;
//
//int main()
//{
//	stack <int> s;
//	queue <int> q;
//	for (int i = 0; i < 10; i++)
//	{
//		int t;
//		scanf("%d",&t);
//		s.push(t);
//		q.push(t);
//	}
//	while (!s.empty())
//	{
//		printf("%d ",s.top());
//		s.pop();
//	}
//	printf("\n");
//	while (!q.empty())
//	{
//		printf("%d ",q.front());
//		q.pop();
//	}
//	return 0;
//}

#include <cstdio>
#include <stack>
#include <queue>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	stack <int> s;
	queue <string> q;
	for (int i = 0; i < n; i++)
	{
		int m;
		string a;
		scanf("%d", &m);
		cin >> a;
		s.push(m);
		q.push(a);
	}
	while (!s.empty())
	{
		printf("%d ", s.top());
		s.pop();
	}
	printf("\n");
	while (!q.empty())
	{
		cout << q.front();
		printf(" ");
		q.pop();
	}
	return 0;
}
