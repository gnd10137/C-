//#include <stdio.h>
//int main()
//{
//	int n;
//	
//	n=2;
//	switch (3)
//	{
//	case 0:
//		printf("영입니다.");
//		break;
//	case 1:
//		printf("일입니다.");
//		break;
//	case 2:
//		printf("이입니다.");
//		break;
//	case 3:
//		printf("삼입니다.");
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
//			printf("3의 배수다.");
//			break;
//		default:
//			printf("3의 배수가 아니다.");
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
//			printf("유소년");
//			break;
//		case 1:
//			printf("청소년");
//			break;
//		case 2:
//			printf("청년");
//			break;
//		case 3:
//			printf("청년");
//			break;
//		case 4:
//			printf("중년");
//			break;
//		case 5:
//			printf("장년");
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
//			printf("참 잘했어요.");
//			break;
//		case 9:
//			printf("너무 잘했어요.");
//			break;
//		case 8:
//			printf("계속 잘했어요.");
//			break;
//		default:
//			printf("힘내요. 할 수 있어요.");
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
//		printf("참 잘했어요.");
//	}
//	else if(avg>=80)
//	{
//		printf("잘했어요.");
//	}
//	else if(avg>70)
//	{
//		printf("화이팅.");
//	}
//	else
//	{
//		printf("힘내요. 할 수 있어요.");
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
