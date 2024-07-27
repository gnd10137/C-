//#include <stdio.h>
//int main() 
//{
//	int a,b;
//	scanf("%d %d",&a,&b);
//	if(a>b)
//	{
//		printf("%d",a);
//	}
//	else
//	{
//		printf("%d",b);
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int a;
//	scanf("%d",&a);
//	if(a%2==0)
//	{
//		printf("礎熱\n");
//	}
//	else if(a%2==1)
//	{
//		printf("�汝酅n");
//	}
//	else
//	{
//		printf("0");
//	}
//	
//}

//#include <stdio.h>
//int main()
//{
//	int a,b;
//	
//	a=23;
//	b=24;
//	printf("%d\n", a>b);
//	printf("%d\n", a<b);
//}

//#include <stdio.h>
//int main()
//{
//	printf("%d\n",10>5) && (8<3);
//	printf("%d\n",10>5) || (8<3);
//	printf("%d\n", !(10>8));
//}

//#include <stdio.h>
//int main()
//{
//	int res;
//	
//	res = 0 && 0;
//	printf("%d\n", res);
//	res = 0 && 1;
//	printf("%d\n", res);
//	res = 1 && 0;
//	printf("%d\n", res);
//	res = 1 && 1;
//	printf("%d\n", res);
//	
//	res = 0 || 0;
//	printf("%d\n", res);
//	res = 0 || 1;
//	printf("%d\n", res);
//	res = 1 || 0;
//	printf("%d\n", res);
//	res = 1 || 1;
//	printf("%d\n", res);
//	
//	printf("%d\n", !res);
//}

//#include <stdio.h>
//int main()
//{
//	int a = 20;
//	
//	a = a + 10;
//	printf("a = &d\n", a);
//	a = a * 10;
//	printf("a = %d\n", a);
//	a = a - 10;
//	printf("a = %d\n", a);
//	a = a / 10;
//	printf("a = %d\n", a);
//}

//#include <stdio.h>
//int main()
//{
//	int a,b;
//	
//	a = 20;
//	b = 5;
//	
//	a += b;
//	printf("a = %d\n", a);
//	a *= b;
//	printf("a = %d\n", a);
//	a -= b;
//	printf("a = %d\n", a);
//	a /= b;
//	printf("a = %d\n", a);
//	a %= b;
//	printf("a = %d\n", a);
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	
//	a++;
//	++a;
//	printf("a = %d\n", a);
//	++a;
//	++a;
//	printf("a = %d\n", a);
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	
//	a--;
//	printf("a = %d\n", a);
//	--a;
//	printf("a = %d\n", a);
//}

//#include <stdio.h>
//int main()
//{
//	int a, b;
//	
//	a = 10;
//	b = a++;
//	printf("a = %d b = %d\n", a, b);
//	b = ++a;
//	printf("a = %d b = %d\n", a, b);
//	
//	a = 20;
//	b = a--;
//	printf("a = %d b = %d\n", a, b);
//	b = --a;
//	printf("a = %d b = %d\n", a, b);
//}

//#include <stdio.h>
//int main()
//{
//	int num = 3;
//	
//	printf("%d\n", num -= 1);
//	printf("%d\n", --num);
//	printf("%d\n", num--);
//	printf("%d\n", num);
//}

//#include <stdio.h>
//int main()
//{
//	int a;
//	scanf("%d",&a);
//	
//	if (a%2==0)
//	{
//		printf("礎熱\n");
//	}
//	else if(a%2==1)
//	{
//		printf("�汝酅n");
//	}
//	else
//	{
//		printf("0");
//	}
//}

#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d %d", &a,&b);
	
	if (a%2==0 && b%2==0)
	{
		printf("%d",a*b);
	}
	else if(a%2==1 && a%2==1)
	{
		printf("%d",a+b);
	}
	else
	{
		printf("%d",a-b);
	}
}
