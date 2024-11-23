//#include <stdio.h>
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	for (int i = 1; i <= 9; i++)
//	{
//		printf("%d * %d = %d\n", N,i,N*i);
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int x;
//	int n;
//	int sum;
//	scanf("%d", &x);
//	scanf("%d", &n);
//	
//	for (int i = 0; i < n; i++)
//	{
//		int a,b;
//		scanf("%d %d", &a, &b);
//		sum+=a*b;
//	}
//	if (x == sum)
//	{
//		printf("Yes");
//	}
//	else
//	{
//		printf("No");
//	}
//}

//#include <stdio.h>
//int main()
//{
//	char str1[] = "C3coding";
//	char str2[10] = "C3coding";
//	
//	printf("%d\n", str1 == str2);
//	printf("%d\n", str1 == "C3coding");
//	printf("%d\n", str2 == "C3coding");
//	printf("%d\n", "C3coding" == "C3coding");
//	printf("%d\n", str1 == "C3coding");
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char *sp = "C3coding";
//	char str[] = "C3coding";
//	int res;
//	
//	res = strcmp(sp, str);
//	printf("%d\n", res);
//	res = strcmp(sp, "C3coding");
//	printf("%d\n", res);
//	res = strcmp("C3coding", "C3coding");
//	printf("%d\n", res);
//	
//	res = strcmp("test", "text");
//	printf("%d\n", res);
//	res = strcmp("text", "test");
//	printf("%d\n", res);
//	
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char name1[10];
//	char name2[10];
//	
//	strcpy(name1, "가");
//	strcpy(name2, "나");
//	
//	printf("%d\n", strcmp(name1, name2));
//	printf("%d\n", strcmp("나", "가"));
//	
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char start[15] = "C3";
//	char end[15] = "coding";
//	int len;
//	
//	printf("start = %s %d\n", start, strlen(start));
//	printf("end = %s %d\n", end, strlen(end));
//	
//	strcat(start, end);
//	len = strlen(start);
//	printf("%s %d\n", start, len);
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n;
//	int sum = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		sum += i;
//	}
//	printf("%d", sum);
//}

#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int arr[100];
	for (int i = 0; i <n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int find;
	scanf("%d", &find);
	int count = 0;
	
	for (int i = 0; i < n; i++)
	{
		if (find == arr[i])
		{
			count++;
		}
	}
	printf("%d", count);
}
