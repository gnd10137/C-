//#include <cstdio>
//#include <string>
//#include <iostream>
//using namespace std;
//
//struct Person
//{
//	int id;
//	string name;
//	int c;
//	int a;
//};
//
//int main()
//{
//	Person student[10000];
//	int n;
//	scanf("%d",&n);
//	for (int i = 0; i < n; i++)
//	{
//		int id, c, a;
//		char name[21];
//		scanf("%d %s %d %d",&id, name, &c, &a);
//		student[i].id = id;
//		student[i].name = name;
//		student[i].c = c;
//		student[i].a = a;
//	}
//	int m;
//	scanf("%d",&m);
//	for (int i = 0; i < m; i++)
//	{
//		string search;
//		cin >> search;
//		int check = 1;
//		for (int j = 0; j < n; i++)
//			if (student[j].name == search)
//			{
//				printf("%d %d %d\n",student[j].id, student[i].c, student[j].a);
//				check = 0;
//			}
//		if (check) printf("-1\n");
//	}
//	return 0;
//}

//#include <cstdio>
//#include <utility>
//using namespace std;
//
//int main()
//{
//	pair <int, int> p[10001];
//	int n;
//	scanf("%d",&n);
//	for (int i = 1; i <= n; i++)
//	{
//		int t, a;
//		scanf("%d %d",&t, &a);
//		p[i] = make_pair(t, a);
//	}
//	pair<int, int> no_1;
//	no_1 = {-1, -1};
//	int ans = 0;
//	for (int i = 0; i <= n; i++)
//	{
//		if (p[i] > no_1)
//		{
//			no_1 = p[i];
//			ans = i;
//		}
//	}
//	printf("%d",ans);
//	return 0;
//}

//#include <cstdio>
//#include <utility>
//using namespace std;
//
//int main()
//{
//	pair<int, int> p[1001];
//	pair<int, int> no_1 = {-1, -1}
//	int n;
//	scanf("%d",&n);
//	for (int i = 0; i < n; i++)
//	{
//		int s, t;
//		scanf("%d %d", &s, &t);
//		t = 5000 - t;
//		p[i] = make_pair(s, t);
//		if (p[i] > no_1)
//			no_1 = p[i];
//	}
//	int ans;
//	for (int i = 0; i < n; i++)
//	{
//		ans += no_1.first - p[1].first;
//	}
//	printf("%d",ans + no_1.second);
//	return 0;
//}
