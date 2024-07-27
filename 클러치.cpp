//#include <stdio.h>
//int main()
//{
//	int a;
//	scanf("%d",&a);
//	if(a%7==0 && a%9==0)
//	{
//		printf("%d",a);
//	}
//}

//#include <stdio.h>
//int main()
//{
//	for(int i=1; i <= 10; i++){
//		printf("씨큐브코딩\n",i);
//}
//}

//#include <stdio.h>
//int main()
//{
//	int n;
//	
//	for (n = 30; n > 20; n--)
//	{
//		printf("%d ",n);
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int n;
//	
//	for (n = 1; n <= 100; n++)
//	{
//		printf("%d ", n);
//	}
//}

//#include <stdio.h>
//int main()
//{
//	for(int i = 1;i<=100;i+=5)
//	{
//		pritnf("%d",i);
//	}
//}

//#include <stdio.h>
//int main()
//{
//	for(int i = 100; i>=0;i-=10)
//	{
//		printf("%d\n",i);
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d"&n);
//	for(int i= -n;i<=n;i++)
//	{
//		printf("%d\n",i)
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d"&n);
//	for(int i = 1; i<=n;i++){
//		printf("%d",i);
//	}
//}


//#include <stdio.h>
//int main()
//{
//	int n,sum=0;
//	scanf("%d",&n);
//	
//	for(int i = 1; i<=n;i++)
//	sum += sum = i;
//	{
//		printf("%d",sum);
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int n,sum=0;
//	scanf("%d",&n);
//	for(int i =9 ; i >= 1 ; i--)
//	printf("%d X %d = %d\n",n,i,n*i);
//}

//#include <stdio.h>
//int main()
//{
//	int n,sum=0;
//	scanf("%d",&n);
//	for(int i =1;i<=n;i++)
//	if(i%3==0){
//		printf("%d\n",i);
//	}
//}

#include <stdio.h>
int main()
{
	int n,sum=0,count=0;
	scanf("%d",&n);
	for(int i = 1; i<=n;i++){
		if(i%6==0)
		{
			sum += i;
			count++;
		}
	}
	printf("개수 : %d\n",count);
	printf("합 : %d\n",sum);
}
