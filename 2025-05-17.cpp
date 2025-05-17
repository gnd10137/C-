//#include <cstdio>
//#include <iostream>
//#include <string>
//using namespace std;
//
//struct Student
//{
//	int id;
//	string name;
//	int c;
//	int a;
//};
//int main()
//{
//	int n;
//	Student student[10000];
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int id,c,a;
//		char name[21];
//		scanf("%d %s %d %d", &id, name, &c, &a);
//		student[i].id = id;
//		student[i].name = name;
//		student[i].c = c;
//		student[i].a = a;
//	}
//	int m;
//	cin >> m;
//	for (int i = 0; i < m; i++)
//	{
//		string search;
//		cin >> search;
//		bool check = true;
//		for (int j = 0; j < n; j++)
//		{
//			if (student[j].name == search)
//			{
//				printf("%d %d %d\n", student[j].id, student[j].c, student[j].a);
//				check = false;
//			}
//		}
//		if (check) printf("-1\n");
//	}
//}

//#include <cstdio>
//#include <iostream>
//#include <utility>
//#include <string>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	pair <int, int> p[10001];
//	for (int i = 1; i <= n; i++)
//	{
//		int t, a;
//		scanf("%d %d",&t, &a);
//		p[i] = make_pair(t,a);
//	}
//	pair <int, int> no_1;
//	no_1 = {-1, -1};
//	
//	int ans = 0;
//	for (int i = 0; i<= n; i++)
//	{
//		if (p[i] > no_1)
//		{
//			no_1 = p[i];
//			ans = i;
//		}
//	}
//}

//#include <iostream>
//#include <utility>
//#include <string>
//using namespace std
//
//int main()
//{
//	pair <int, int> p[51][51];
//	int n, m;
//	scanf("%d %d",&n, &m);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = i; j <= m; j++)
//		{
//			int s, h;
//			scanf("%d %d",&s, &h);
//			p[i][j] = make_pair(s,h);
//		}
//	}
//	int a1, b1, a2, b2;
//	scanf ("%d %d", &a1, &b1);
//	scanf ("%d %d", &a2, &b2);
//	pair <int, int> temp = p[a1][b1];
//	p[a1][b1] = p[a2][b2];
//	p[a2][b2] = temp;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			printf("%d %d",p[i][j].first, p[i][j].second);
//		}
//		printf("\n");
//	}
//}

#include <cstdio>
#include <iostream>
#include <utility>
#include <string>
using namespace std;

struct info
{
	int AN, MN, SZ, PS;
};
info product[1000];
int count = 0; 

void add(int an, int mn, int sz, int ps){
	product[count].AN = an; 
	product[count].MN = mn;
	product[count].SZ = sz;
	product[count].PS = ps;
	count++;
}
void modi(int an, int nb, int ch){
	for (int i = 0; i < count; i++){
		if(an == product[i].AN){
			if (nb == 0) product[i].AN = ch;
			else if (nb == 1) product[i].MN = ch;
			else if (nb == 2) product[i].SZ = ch;
			else if (nb == 3) product[i].PS = ch;
		}
	}
}
void print_info(int an){
	for(int i = 0; i < count; i++){
		if(product[i].AN == an){
			printf("%d %d %d %d", product[i].AN, product[i].MN, product[i].SZ, product[i].PS);
		}
	}
}




int main()
{
	int n;
	scanf("%d",&n);
	for (int i = 0; i < n; i++)
	{
		int key;
		scanf("%d",&key);
		if (key==0)
		{
			int AN, MN, SZ, PS;
			scanf("%d %d %d %d",&AN, &MN, &SZ, &PS);
			add(AN, MN, SZ, PS);
		}
		else if (key==1)
		{
			int AN, NB, CH;
			scanf("%d %d %d",&AN, &NB, &CH);
			modi(AN, NB, CH);
		}
		
		else if (key==2)
		{
			int AN;
			scanf("%d",&AN);
			print_info(AN);
		}
	}
}
