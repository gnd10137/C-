//#include <cstdio>
//int main()
//{
//	char s[1001];
//	char target[] = "finearts";
//	scanf("%s",s);
//	for (int i = 0; s[i]; i++)
//	{
//		if ('A' <= s[i] && s[i] <= 'Z')
//			s[i] = s[i] - 'A' + 'a';
//		bool check = false;
//		for (int j = 0; target[j]; j++)
//		{
//			if (s[i] == target[j])
//				check = true;
//		}
//		if (!check)
//			printf("%c",s[i]);
//	}
//}

//#include <cstdio>
//#include <cstring>
//
//int main()
//{
//	char c[101] = {0, },r[101] = {0, };
//	int n;
//	scanf("%s",c);
//	scanf("%d",&n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s",r);
//		if (strcmp(c,r)==0)
//		{
//			printf("Yes");
//			return 0;
//		}
//	}
//	printf("No");
//	return 0;
//}

//#include <cstdio>
//#include <cstring>
//
//char str[100001];
//
//int palindrome(int st, int en)
//{
//	if (st>en)return 0;
//	else if (str[st] == str[en])
//		return palindrome(st+1, en-1);
//	else return 1;
//}
//int main()
//{
//	int t;
//	int count=0;
//	scanf("%d",&t);
//	for (int i = 0; i < t; i++)
//	{
//		scanf("%s",str);
//		count+=palindrome(0,strlen(str)-1);
//	}
//	printf("%d",t-count);
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string a,b;
//	cin >> a;
//	cin >> b;
//	if (a.size()) > b.size())
//		cout << a;
//	else if (b.size() > a.size())
//		cout << b;
//	else
//	{
//		if (a>b)
//			cout << a;
//		else
//			cout << b;
//	}
//	return 0;
//}

//#include <cstdio>
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s;
//	cin>>s;
//	string bomb;
//	cin>>bomb;
//	int bomb_size=bomb.size();
//	int index=0;
//	while (1)
//	{
//		index=s.find(bomb);
//		if (index=0)
//			break;
//		s=s.substr(0, index)+s.substr(index+bomb_size,s.size()(index+bomb_size));
//	}
//	if (s.size()==0)
//		printf("Art!");
//	else
//		cout<<s;
//	return 0;
//}

//#include <cstdio>
//#include <iostream>
//#include <string>
//using namespace std;
//string s;
//
//void ins(int b, string temp)
//{
//	s=s.substr(0,b)+temp+s.substr(b,s.size()-b);
//}
//void del(int b)
//{
//	s=s.substr(0,b)+s.substr(b+1,s.size()-b-1);
//}
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	for (int i = 0; i < n; i++)
//	{
//		int a;
//		scanf("%d",&a);
//		if (a==0)
//		{
//			int b;
//			scanf("%d",&b);
//			string temp;
//			cin>>temp;
//			ins(b, temp);
//		}
//		else if (a==1)
//		{
//			int b;
//			scanf("%d",&b);
//			del(b);
//		}
//		else
//		{
//			cout<<s;
//			printf("\n");
//		}
//	}
//	return 0;
//}

#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string best_list="";
	int n;
	int count=0;
	scanf("%d",&n);
	for (int i = 0; i < n; i++)
	{
		string name;
		cin >> name;
		int index_name = best_list.find(name);
		if (index_name >= 0) {
			cout<<best_list << endl;
			continue;
		}
		if (count==0)
		{
			best_list += name;
			count++;
		}
		else if (count < 3)
		{
			best_list += " "+name;
			count++;
		}
		else
		{
			int index = best_list.find(" ");
			best_list = best_list.substr(index + 1, best_list.size());
			best_list += " "+name;
		}
		cout<<best_list << endl;
	}
}
