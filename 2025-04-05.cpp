//#include <cstdio>
//int main()
//{
//	int n,x,a[100];
//	scanf("%d %d", &n,&x);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (x > a[i])
//		{
//			printf("%d",a[i]);
//		}
//	}
//}

#include <cstdio>
int main()
{
	int number[9],max=0,count=0;
	for (int i = 0; i < 9; i++)
	{
		scanf("%d",&number[i]);
	}
	for (int i = 0; i < 9; i++)
	{
		if (max < number[i])
		{
			max=number[i];
			count=i+1;
		}
	}
	printf("%d %d",max, count);
}
