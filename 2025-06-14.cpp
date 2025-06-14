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
//	int n,m;
//	scanf("%d %d",&n, &m);
//	queue <int> q;
//	for (int i = 0; i <= n; i++)
//	{
//		q.push(i);
//	}
//	printf("<");
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = 0; j < m - 1; j++)
//		{
//			q.push(q.front());
//			q.pop();
//		}
//		printf("%d ",q.front());
//		q.pop();
//	}
//	printf("%d>\n", q.front());
//	return 0;
//}

//#include <cstdio>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	vector <int> v;
//	v.push_back(12);
//	v.push_back(5);
//	v.push_back(96);
//	
//	for (int i = 0; i < v.size; i++)
//		printf("%d\n",v[i]);
//	return 0;
//}

#include <cstdio>
#include <stack>
using namespace std;

int main()
{
	stack <int> st;
	
	st.push(4);
	st.push(5);
	st.push();
	
	printf("%d\n", st.top());
	printf("%d\n", st.empty());
	printf("%d\n", st.size());
	return 0;
}
