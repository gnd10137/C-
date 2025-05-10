//#include <cstdio>
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string w;
//	cin >> w;
//	while (w.size())
//	{
//		cout << w << endl;
//		w = w.substr(1, w.size() - 1);
//	}
//	return 0;
//}

//#include <cstdio>
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string s;
//	cin >> s;
//	for (int i = 0; i < s.size(); i++)
//	{
//		for (int j = i; j < s.size(); j++)
//		{
//			cout << s[j];
//		}
//		cout << endl;
//	}
//}

//#include <cstdio>
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string s;
//	string b;
//	cin >> s;
//	cin >> b;
//	int cnt = 0;
//	for (int i = 0; i <= s.size() - b.size(); i++)
//	{
//		if (s.substr(i, b.size()) == b) cnt++;
//	}
//	cout << cnt << endl;
//}

//#include <cstdio>
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string self;
//	string other;
//	cin >> self;
//	cin >> other;
//	int i = 0;
//	while (self[i])
//	{
//		if (self[i] == other[i])
//		{
//			i++;
//			countine;
//		}
//		if (self[i] > other[i])
//			cout << "kid" << endl;
//		else
//			cout << "sir" << endl;
//		break;
//	}
//}

#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
char map[51] = {0,};
int move(int now)
{
	if (map[now] == 0) return now;
	else if (now > 50) return 50;
	else if (now < 1) return 1;
	
	int next;
	if ('a' <= map[now] && map[now] <= 'z')
		next = now - (map[now] - 'a'+ 1);
	if ('A' <= map[now] && map[now] <= 'Z')
		next = now + (map[now] - 'A'+ 1);
	return move(next);
}
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num;
		char ch;
		scanf("%d %c", &num, &ch);
		printf("%d", ch);
		map[num] = ch;
	}
	int d;
	scanf("%d",&d);
	printf("%d",move(1+d));
}
