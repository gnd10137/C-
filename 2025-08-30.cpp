//#include <cstdio>
//int main()
//{
//	int A, B, t;
//	scanf("%d", &t);
//	for (int i = 0; i < t; i++)
//	{
//		scanf("%d %d", &A, &B);
//		int n = A + B;
//		printf("%d\n", n);
//	}
//}

#include <cstdio>
int main()
{
	int arr[26] = {0,};
	char str[1000001];
	scanf("%s", str);
	for (int i = 0; str[i]; i++)
	{
		if (str[i] >= 'a')
			str[i] -= 32;
			arr[str[i] - 'A']++;
	}
	int max = 0;
	int idx = 0;
	for (int i = 0; i < 26; i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
			idx = i;
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (i != idx && max == arr[i])
		{
			printf("?");
			return 0;
		}
	}
	printf("%c", idx + 'A');
}
