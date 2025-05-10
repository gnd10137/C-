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
//		cout << w;
//		printf("\n");
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
//	string b;
//	cin >> s;
//	cin >> b;
//	int count = 0;
//	for (int i = 0; i <= s.size(); i++)
//			if (s.substr(i, b.size()) == b)
//					count++;
//	printf("%d",count);
//	return 0;
//}

//#include <cstdio>
//int main()
//{
//	char str[1001];
//	scanf("%[^\n]",str);
//	for (int i = 0; str[i]; i++)
//	{
//		if ('A' <= str[i] && str[i] <= 'Z')
//		{
//			str[i] = str[i] - 'A' + 'a';
//		}
//	}
//	printf("%s",str);
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
//	cin >> s;
//	string bomb;
//	cin >> bomb;
//	int bomb_size = bomb.size();
//	int index = 0;
//	while (1)
//	{
//		index = s.find(bomb);
//		if (index < 0)
//		{
//			break;
//		}
//		s=s.substr(0, index) + s.substr(index + bomb_size, s.size()(index + bomb_size));		
//	}
}
