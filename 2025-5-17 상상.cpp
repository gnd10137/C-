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
//		w = w.substr(1, size() - 1);
//	}
//	return 0;
//}

#include <cstdio>
struct Point
{
	int x,y;
	bool operator==(Point right)
	{
		return x == right.x && y == right.y;
	};
	Point operator+(Point right)
	{
		Point temp={x+right.x,y+right.y};
		return temp;
	};
	Point operator+(int right)
	{
		Point temp={x+right,y+right};
		return temp;
	};
};
