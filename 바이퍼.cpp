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
//	printf("���� : %d",count);
//	printf("�� : %d",sum);
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
//	printf("�ݺ�Ƚ��:%d\n",count);
//	printf("��:%d",sum);
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
//		printf("i�� ��:%d\n",i);
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
//	printf("%d�ڸ���",count);
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
//	printf("\n��:%d",sum);
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
//	printf("%d�� ������ ������ : %d\n",u,reverse);
//	printf("�� ���� ���� : %d",);
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
	printf("%d�� %d���� ���� ������ : %d",a,b,cnt);
	printf("%d�� %d���� ���� ���� : %d",a,b,sum);
}
