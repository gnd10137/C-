//#include <cstdio>
//#include <queue>
//using namespace std;
//
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	queue <pair<int, int>> q;
//	q.push(make_pair(a,0));
//	while (!q.empty())
//	{
//		int num = q.front().first;
//		int count = q.front().second;
//		q.pop();
//		if (num == b)
//		{
//			printf("%d",count);
//			return 0;
//		}
//		if (num * 2 <= b)
//			q.push(make_pair(num * 2, count + 1));
//		if (num * 10 + 1 <= b)
//			q.push(make_pair(num * 10 + 1, count + 1));
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
//	int n, ans = 0;
//	char word[100001];
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s", word);
//		stack <char> s;
//		for (int j = 0; word[j]; j++)
//		{
//			if (s.empty())
//				s.push(word[i]);
//			else if (word[j] == s.top())
//				s.pop();
//			else
//				s.push(word[j]);
//		}
//		if (s.empty())
//			ans++;
//	}
//	printf("%d", ans);
//	return 0;
//}

//#include <cstdio>
//#include <algorithm>
//using namespace std;
//
//bool cmp (int left, int right)
//{
//	return left > right;
//}
//int main()
//{
//	int data[10];
//	for (int i = 0; i < 10; i++)
//		scanf("%d", &data[i]);
//	sort(data, data + 10);
//	for (int i = 0; i < 10; i++)
//		printf("%d ", data[i]);
//	printf("\n");
//	sort(data, data + 10, cmp);
//	for (int i = 0; i < 10; i++)
//		printf("%d ", data[i]);
//	return 0;
//}

#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	double h[100001];
	double temp_h[100001];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%lf", &h[i]);
		temp_h[i] = h[i];
	}
	sort(h, h + n);
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (h[i] != temp_h[i])
			count++;
	}
	printf("%d", count);
	return 0;
}
