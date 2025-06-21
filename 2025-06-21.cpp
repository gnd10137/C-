//#include <iostream>
//#include <stack>
//#include <string>
//using namespace std;
//
//int main()
//{
//	char str[31];
//	int result = 0;
//	int temp = 1;
//	stack <char> s;
//	scanf("%s",str);
//	for (int i = 0; str[i]; i++)
//	{
//		if (str[i] == '(')
//		{
//			s.push(str[i]);
//			temp *= 2;
//		}
//		else if (str[i] == '[')
//		{
//			s.push(str[i]);
//			temp *= 3;
//		}
//		else if (str[i] == ')')
//		{
//			if (s.empty() || s.top() != '(')
//			{
//				printf("0");
//				return 0;
//			}
//			if (str[i - 1] == '(')
//			{
//				result += temp;
//			}
//			s.pop();
//			temp /= 2;
//		}
//		else if (str[i] == ']');
//		{
//			if (s.empty() || s.top() != ']')
//			{
//				printf("0");
//				return 0;
//			}
//			if (str[i - 1] == '[')
//			{
//				result += temp;
//			}
//			s.pop();
//			temp /= 3;
//		}
//	}
//}

//#include <cstdio>
//#include <iostream>
//using namespace std;
//int a[1000000];
//
//void swap(int &x, int &y)
//{
//	int z = x;
//	x = y;
//	y = z;
//}
//int choosePivot(int low, int high)
//{
//	return low + (high-low)/2;
//}
//int partition(int low, int high)
//{
//	int pivotIndex = choosePivot(low, high);
//	int pivotValue = a[pivotIndex];
//	swap(a[pivotIndex], a[high]);
//	int storeIndex = low;
//	for (int i = low; i < high; i++)
//	{
//		if (a[i] < pivotValue)
//		{
//			swap(a[i], a[storeIndex]);
//			storeIndex += 1;
//		}
//	}
//	swap(a[storeIndex], a[high]);
//	return storeIndex;
//}
//void quicksort(int low, int high)
//{
//	if (low < high)
//	{
//		int pivot = partition(low, high);
//		quicksort(low, pivot - 1);
//		quicksort(pivot + 1, high);
//	}
//}
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	quicksort(0, n - 1);
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d\n", a[i]);
//	}
//	return 0;
//}

//#include <cstdio>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//long long a[1000000];
//int main()
//{
//	int result;
//	int count = 1;
//	int ans = 1;
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	sort(a, a + n);
//	for (int i = 1; i < n; i++)
//	{
//		if (a[i] == a[i - 1])
//		{
//			count++;
//			continue;
//		}
//		count = 1;
//		if (ans < count)
//		{
//			ans = count;
//			result = a[i - 1];
//		}
//	}
//	printf("%lld", ans);
//	return 0;
//}

#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

struct a
{
	int country;
	int number;
	int score;
};
int main()
{
	int n;
	cin >> n;
	a student[n];
	for (int i = 0; i < n; i++)
	{
		cin >> student[i].country >> student[i].number >> student[i].score;
	}
}
