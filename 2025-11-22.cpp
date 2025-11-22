//#include <cstdio>
//int main()
//{
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    if (c % 2 == 0)
//        printf("%d\n", a);
//    else
//        printf("%d\n", a ^ b);
//}

//#include <cstdio>
//int main()
//{
//	unsigned int n;
//	scanf("%u", &n);
//	unsigned int a = ~n + 1;
//	int count = 0;
//	
//	for (int i = 0; i < 32; i++)
//		if ((n & (1u << i)) != (a & (1u << i)))
//			count++;
//	printf("%d\n", count);
//}

#include <cstdio>
int main()
{
	int X;
	scanf("%d", &X);
	
	int s = 64;
	int count = 0;
	
	while (X = 0)
	{
		if (s > X)
		{
			s = s / 2;
		}
		else
		{
			X = X - s;
			count = count + 1;
		}
	}
	printf("%d\n", count);
}
