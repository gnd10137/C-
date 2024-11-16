//#include <stdio.h>
//int main()
//{
//	int a,b;
//	
//	a=12;
//	b=20;
//	printf("a=%d, b=%d\n",a,b);
//	
//	{
//		int a,c;
//		
//		a=30;
//		c=50;
//		printf("a=%d, b=%d, c=%d\n",a,b,c);
//		a=90;
//		b=45;
//		c=75;
//	}
//	printf("a=%d, b=%d \n",a,b);
//	return 0;
//}

//#include <stdio.h>
//
//int PrintFun1(int m, int n);
//int PrintFun2(int m, int n);
//
//int main()
//{
//	int m,n;
//	m=10;
//	n=30;
//	
//	printf("main before : m=%d n=%d\n", m, n);
//	PrintFun1(m,n);
//	printf("main after : m=%d n=%d\n", m, n);
//	return 0;
//}
//
//int PrintFun1(int m, int n)
//{
//	printf("fun1 before : m=%d n = %d\n",m,n);
//	m=m+50;
//	n=n*10;
//	PrintFun2(m,n);
//	printf("fun1 after : m=%d n = %d\n",m,n);
//}
//int PrintFun2(int m,int n)
//{
//	printf("fun2 before : m=%d n=%d\n",m,n);
//	m=m+50;
//	n=n*10;
//	printf("fun2 after : m=%d n=%d\n",m,n);
//}

//#include <stdio.h>
//int ga;
//int gb;
//
//int Sum();
//int Difference();
//
//int main()
//{
//	printf("정수를 2개 입력하세요 : ");
//	scanf("%d %d", &ga,&gb);
//	Sum();
//	Difference();
//}
//
//int Sum()
//{
//	printf("%d + %d = %d\n", ga,gb, ga + gb);
//}
//int Difference()
//{
//	int diff;
//	
//	if (ga>gb)
//	{
//		diff=ga-gb;
//		printf("%d-%d = ",ga,gb);
//	}
//	else
//	{
//		diff=gb-ga;
//		printf("%d-%d =",gb,ga);
//	}
//	printf("%d ", diff);
//}

//#include <stdio.h>
//#include <stdlib.h>
//int introduce()
//{
//	printf("안녕하세요.\n");
//}
//int Sum()
//{
//	int i=7;
//	int j = 8;
//	printf("%d+%d=%d\n", i,j,i+j);
//}
