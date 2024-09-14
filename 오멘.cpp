//#include <stdio.h>
//int main()
//{
//	double height[4];
//	int j=2;
//	
//	height[0]=145.7;
//	height[1]=156.3;
//	height[j]=147.89;
//	j++;
//	height[j]=159.4;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char c; int i; long l; float f; double d;
//	
//	printf("%d %d %d %d %d\n", sizeof(c), sizeof(i), sizeof(l), sizeof(f), sizeof(d));
//	printf("%d %d %d\n", sizeof(char), sizeof(int), sizeof(long));
//	printf("%d %d\n", sizeof(float), sizeof(double));
//	printf("%d %d\n", sizeof(153), sizeof(5.2));
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char ch1, ch2;
//	
//	ch1='A';
//	ch2='a';
//	printf("%c %c\n", ch1, ch2);
//	printf("%d %d\n", ch1, ch2);
//	
//	printf("%c %c\n", 66, 98);
//	printf("%d %d\n", 66, 98);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char ch;
//	
//	printf("문자를 입력하세요: ");
//	scanf("%c", &ch);
//	printf("%c %d\n", ch, ch);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char ch;
//	
//	printf("문자를 입력하세요: ");
//	ch=getchar();
//	putchar(ch);
//	printf("%c %d\n", ch, ch);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char str1[ ] = {'H','i',' ','C','3',' ','C','o','d','i','n','g'};
//	char str2[ ] = {'H','i',' ','C','3',' ','C','o','d','i','n','g','\0'};
//	
//	printf("%s\n", str1);
//	printf("%s\n", str2);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char str1[15] = {'H','i',' ','C','3',' ','C','o','d','i','n','g'};
//	char str2[15] = {'H','i',' ','C','3',' ','C','o','d','i','n','g','\0'};
//	
//	printf("%s\n", str1);
//	printf("%s\n", str2);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char str1[15] = "Coding is fun";
//	char str2[ ] = "Coding is fun";
//	
//	printf("%s\n", str1);
//	printf("%s\n", str2);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char word[20];
//	
//	printf("단어를 입력하세요 :");
//	scanf("%s", word);
//	printf("입력하신 단어는 %s 입니다", word);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	double height[4];
//	int j = 2;
//	
//	height[0] = 145.7;
//	height[1] = 156.3;
//	height[j] = 147.89;
//	j++;
//	height[j] = 159.4;
//	printf("%lf", height [0]);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int ar[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90 ,100};
//	int br[10];
//	
//	for (int i=0; i<=9; i++)
//	{
//		br[i] = ar[i];
//		printf("%d ", br[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int ar[10] = {5,2,1,5,6,7,8,9,4,2};
//	int min = 100;
//	int index;
//	
//	for (int i = 0; i < 10; i++)
//	{
//		if (min>ar[i])
//		{
//			min = ar[i];
//			index = i;
//		}
//	}
//	printf("min : %d\n", min);
//	printf("index : %d", index);
//}

//#include <stdio.h>
//int main()
//{
//	int ar[101];
//	int n;
//	scanf("%d", &n);
//	
//	for (int i = 0; i<n; i++)
//	{
//		scanf("%d ", &ar[i]);
//	}
//	int x, cnt = 0;
//	scanf("%d", &x);
//	
//	for (int i = 0; i<n; i++)
//	{
//		if (x==ar[i])
//		{
//			cnt++;
//		}
//	}
//	printf("%d ",cnt);
//}

//#include <stdio.h>
//int main()
//{
//	int n, x;
//	scanf("%d %d", &n, &x);
//	int ar[10001];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &ar[i]);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (x > ar[i])
//		{
//			printf("%d ", ar[i]);
//		}
//	}
//}

#include <stdio.h>
int main()
{
	
}
