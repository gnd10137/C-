//#include <cstdio>
//#include <iostream>
//#include <string>
//#include <utility>
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
//	book b[1001];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> b[i].s >> b[i].g >>b[i].u;
//	}
//	string t;
//	cin >> t;
//	for (int i = 0; i < n; i++)
//	{
//		if (t == b[i].s)
//		{
//			printf("%d %d", b[i].g, b[i].u);
//			break;
//		}
//	}
//	return 0;
//}

//#include <cstdio>
//#include <iostream>
//#include <string>
//#include <utility>
//using namespace std;
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	pair < int, int> star[101];
//	for (int i = 1; i <= n; i++)
//	{
//		int x, y;
//		cin >> x >> y;
//		star[i] = make_pair(x,y);
//	}
//	int sum = 0;
//	for (int i = 0; i < m; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		int x_dist = (star[a].first - star[b].first)*(star[a].first - star[b].first);
//		int y_dist = (star[a].second - star[b].second)*(star[a].second - star[b].second);	
//		sum += x_dist + y_dist;
//	}
//	printf("%d",sum);
//	return 0;
//}

//#include <cstdio>
//#include <iostream>
//#include <queue>
//#include <stack>
//#include <string>
//using namespace std;
//
//int main()
//{
//	stack <int> s;
//	queue <int> q;
//	for (int i = 0; i < 10; i++)
//	{
//		int n;
//		cin >> n;
//		s.push(n);
//		q.push(n);
//	}
//	while (!q.empty())
//	{
//		cout << q.front() << " ";
//		q.pop();
//	}
//	cout <<endl;
//	while (!s.empty())
//	{
//		cout << s.top() << " ";
//		s.pop();
//	}
//	return 0;
//}

//#include <cstdio>
//#include <iostream>
//#include <queue>
//#include <stack>
//#include <string>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	stack<int> s;
//	queue<string> q;
//	for (int i = 0; i < n; i++)
//	{
//		int a;
//		string b;
//		cin >> a;
//		cin >> b;
//		s.push(a);
//		q.push(b);
//	}
//	while (!s.empty())
//	{
//		cout << s.top() << " ";
//		s.pop();
//	}
//	cout <<endl;
//	while (!q.empty())
//	{
//		cout << q.front() << " ";
//		q.pop();
//	}
//	return 0;
//}

//#include <cstdio>
//#include <stack>
//using namespace std;
//
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	stack <int> s;
//	for (int i = 0; i < n; i++)
//	{
//		int size;
//		scanf("%d",&size);
//		while (!s.empty() && s.top() < size)
//		{
//			s.pop();
//		}
//		s.push(size);
//	}
//	printf("%d",s.size());
//	return 0;
//}

//#include <cstdio>
//#include <stack>
//using namespace std;
//
//int main()
//{
//	char str[100001];
//	stack<char> s;
//	scanf("%s",&str);
//	for (int i = 0; str[i]; i++)
//	{
//		if (str[i] == '('||str[i] == '{'||str[i] == '[')
//			s.push(str[i]);
//		else
//		{
//			if (s.empty())
//			{
//				printf("0");
//				return 0;
//			}
//			else if (s.top() != '(' && str[i] == ')')
//			{
//				printf("0");
//				return 0;
//			}
//			else if (s.top() != '{' && str[i] == '}')
//			{
//				printf("0");
//				return 0;
//			}
//			else if (s.top() != '{' && str[i] == ']')
//			{
//				printf("0");
//				return 0;
//			}
//			s.pop();
//		}
//	}
//	if (s.empty())
//		printf("1");
//	else
//		printf("0");
//	return 0;
//}

//#include <cstdio>
//#include <stack>
//#include <queue>
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	int a, b;
//	scanf("%d %d",&a, &b);
//	queue<int> q;
//	q.push(a);
//	while (!q.empty())
//	{
//		int num = q.front();
//		q.pop();
//		if(num==b)
//		{
//			printf("1");
//			return 0;
//		}
//		if (num * 2 <= b)
//			q.push(num * 2);
//		if (num * 10 + 1 <= b)
//			q.push(num * 10 + 1);
//	}
//	printf("%d",-1);
//	return 0;
//}

#include <cstdio>
#include <stack>
using namespace std;

int main()
{
	char str[101];
	scanf("%s",str);
	stack<int> s;
	for (int i = 0; str[i]; i++)
	{
		if ('0' <= str[i] && str[i] <= '9')
			s.push(str[i] - '0');
		else
		{
			int a = s.top();
			s.pop();
			int b = s.top();
			s.pop();
			if (str[i] == '+')
				s.push(b+a);
			else
				s.push(b-a);
		}
	}
	printf("%d",s.top());
	return 0;
}
