//#include <stdio.h>
//int main()
//{
//	int n;
//	int sum=0;
//	int count=0;
//	scanf("%d",&n);
//	for (int i=1;i<=n;i++){
//		if(i%6==0){
//			count++;
//			sum += i;
//		}
//	}
//	printf("갯수 : %d",count);
//	printf("합 : %d",sum);
//}

//#include <stdio.h>
//int main()
//{
//	int i=10;
//	int count=0;
//	int sum=0;
//	while(i<=17)
//	{
//		count++;
//		
//		sum+=i;
//		printf("%d ",i);
//		i++;
//	}
//	printf("반복횟수:%d\n",count);
//	printf("합:%d",sum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i=11;
//	do
//	{
//		printf("%d ",i);
//		i++;
//	}
//	while (i<=10);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i=0;
//	while(i<10)
//	{
//		printf("i의 값:%d\n",i);
//		i++;
//		if(i==5)
//		{
//			break;
//		}
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	while (n>0){
//		count++;
//		n\=10;
//	}
//	printf("%d자리수",count);
//}

//#include <stdio.h>
//int main()
//{
//	int n;
//	int sum=0;
//	scanf("%d",&n);
//	while (n>0){
//		printf("%d",n%10);
//		sum+=n%10;
//		n/=10;
//	}
//	printf("\n합:%d",sum);
//	
//}

//#include <stdio.h>
//int main()
//{
//	int n, u, reverse = 0;
//	scanf ("%d",&n);
//	u = n;
//	while (n > 0){
//		reverse = n * 10 + n % 10;
//		n /= 10;
//	}
//	printf("%d을 뒤집은 정수는 : %d\n",u,reverse);
//	printf("두 수의 합은 : %d",);
//}

#include <stdio.h>
int main()
{
	int a,b;
	int cnt=0,sum=0;
	scanf("%d %d",&a,&b);
	
	for (int i = a - 1; i <= b + 1; i--){
		printf("%d",i);
		cnt++;
		sum += i;
	}
	printf("%d와 %d사이 수의 개수는 : %d",a,b,cnt);
	printf("%d와 %d사이 수의 합은 : %d",a,b,sum);
}
