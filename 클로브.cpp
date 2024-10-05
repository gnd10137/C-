//#include <stdio.h>
//int main()
//{
//	int a;
//	double b;
//	char c;
//	
//	a=153; b=12.7; c='J';
//	printf("변수 a의 주소 : %d\n",&a);
//	printf("변수 b의 주소 : %d\n",&b);
//	printf("변수 c의 주소 : %d\n",&c);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int m;
//	
//	printf("%d\n", 45);
//	printf("%d/n", 'A');
//	printf("%d\n", "Coding");
//	printf("%d\n", "알고리즘");
//	printf("%d\n", &m);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char ch='A';
//	
//	char* pch;
//	pch = &ch;
//	printf("%p\n", pch);
//	printf("%c\n", *pch);
//}

//#include <stdio.h>
//int add(int num1, int num2);
//
//int main()
//{
//	int number1=5;
//	int number2=10;
//	add(number1, number2);
//	printf("number1=%d\n", number1);
//	printf("number2=%d\n", number2);
//}
//int add(int num1, int num2)
//{
//	num1=num1+10;
//	num2=num2+10;
//}

//#include <stdio.h>
//int add(int* num1, int* num2);
//
//int main()
//{
//	int number1=5;
//	int number2=10;
//	add(&number1, &number2);
//	printf("number1=%d\n", number1);
//	printf("number2=%d\n", number2);
//}
//int add(int* num1, int* num2)
//{
//	*num1=*num1+10;
//	*num2=*num2+10;
//}

#include <stdio.h>
int main()
{
	int n;
	int *pn, *pr;
	int ar[10]={10,20,30,40,50,60,70,80,90,100};
	
	n=49;
	pn=&n;
	pr=&ar[2];
	printf("%d %d %p %p\n", n, ar[2], pn, pr);
	
	*pn=59;
	*pr=33;
	printf("%d %d\n", *pn, *pr);
}
