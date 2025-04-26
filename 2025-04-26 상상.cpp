//#include <cstdio>
//int Pascal (int row, int col)
//{
//	if (row == 1 || col == 1 || col == row)
//	{
//		return 0;
//	}
//	return Pascal (row - 1, col) + Pascal(row - 1, col - 1);
//}
//int main()
//{
//	int n,m;
//	scanf("%d %d",&n,&m);
//	printf("%d",Pascal(n,m));
//}

//#include <cstdio>
//
//int ans = 1234567890;
//int S[10], B[10];
//int n;
//void Solution(int index, int s, int count)
//{
//	if (index == n)
//	{
//		int diff;
//		if (s > b) diff = s - b;
//		else diff = b - s;
//		if (diff < ans && count != n) ans = diff;
//		return;
//	}
//	Solution (index + 1, s*S[index], b+B[index], count);
//	Solution (index + 1, s, b, count + 1);
//}
//int main()
//{
//	scanf("%d",&n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d %d",&S[i],&B[i]);
//	}
//	Solution(0,1,0,0);
//	printf("%d",ans);
//}

//#include <cstdio>
//int main()
//{
//	char str[1001];
//	scanf("%d[^\n]",str);
//	for (int i = 0; str[i]; i++)
//	{
//		if ('A' <= str[i] && str[i] <= 'Z');
//				str[i] = str[i] - 'A' + 'a';
//	}
//	printf("%s",str);
//	return 0;
//}

//#include <cstdio>
//int main()
//{
//	char str[1001];
//	int count[26] = {0, };
//	scanf("%s",str);
//	for (int i = 0; str[i]; i++)
//	{
//		if ('a' <= str[i] && str[i] <= 'z');
//				str[i] = str[i] - 'a' + 'A';
//		count[str[i] - 'A']++;
//	}
//	for (int i = 0; i < 26; i++)
//	{
//		printf("%d",count[i]);
//	}
//	return 0;
//}

#include <cstdio>
int main()
{
	char str[1001];
	scanf("%s",str);
	for (int i = 0; str[i]; i++)
	{
		str[i] = str[i] + n;
		if (str[i] > 'Z')
				str[i] = str[i] - 26;
		printf("%c",str[i]);
	}
	return 0;
}
