//#include <stdio.h>
//int main()
//{
//	int n;
//	
//	n=2;
//	switch (3)
//	{
//	case 0:
//		printf("���Դϴ�.");
//		break;
//	case 1:
//		printf("���Դϴ�.");
//		break;
//	case 2:
//		printf("���Դϴ�.");
//		break;
//	case 3:
//		printf("���Դϴ�.");
//		break;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	
//	switch(n%3)
//	{
//		case 0:
//			printf("3�� �����.");
//			break;
//		default:
//			printf("3�� ����� �ƴϴ�.");
//			break;
//	}
//return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int age;
//	scanf("%d",&age);
//	
//	switch(age/10)
//	{
//		case 0:
//			printf("���ҳ�");
//			break;
//		case 1:
//			printf("û�ҳ�");
//			break;
//		case 2:
//			printf("û��");
//			break;
//		case 3:
//			printf("û��");
//			break;
//		case 4:
//			printf("�߳�");
//			break;
//		case 5:
//			printf("���");
//			break;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int kor,eng,math,sci;
//	scanf("%d %d %d %d",&kor,&eng,&math,&sci);
//	int sum=kor+eng+math+sci;
//	int avg=sum/4;
//	printf("sum : %d\n",sum);
//	printf("avg : %d\n",avg);
//	
//	switch (n/10)
//	{
//		case 10:
//			printf("�� ���߾��.");
//			break;
//		case 9:
//			printf("�ʹ� ���߾��.");
//			break;
//		case 8:
//			printf("��� ���߾��.");
//			break;
//		default:
//			printf("������. �� �� �־��.");
//			break;
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int kor,eng,math,sci;
//	scanf("%d %d %d %d",&kor,&eng,&math,&sci);
//	int sum=kor+eng+math+sci;
//	int avg=sum/4;
//	printf("sum : %d\n",sum);
//	printf("avg : %d\n",avg);
//	
//	if (avg>=90)
//	{
//		printf("�� ���߾��.");
//	}
//	else if(avg>=80)
//	{
//		printf("���߾��.");
//	}
//	else if(avg>70)
//	{
//		printf("ȭ����.");
//	}
//	else
//	{
//		printf("������. �� �� �־��.");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	for (int i=1; i<=10; i++)
//	{
//		if (n%i==0)
//		{
//			printf("%d ",i);
//		}
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int sum_even=0;
//	int sum_odd=0;
//	
//	for (int i=1; i<=10; i++){
//		if(i%2==0){
//			sum_even += i
//		}
//		else{
//			sum_odd += i
//		}
//	}
//}

#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for (int i=1; i<=n; i++)
	{
		if(n%i==0)
		{
			printf("%d ", i);
		}
	}
}
