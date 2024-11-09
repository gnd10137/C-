//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	printf("%d", n);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a,b,c;
//	
//	scanf("%d",&a);
//	printf("a=%d\n",a);
//	scanf("%d%d", &a, &b);
//	printf("a=%d b=%d\n", a,b);
//	scanf("%d%d%d", &a, &b, &c);
//	printf("a=%d b=%d c=%d\n", a,b,c);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	printf("%c %d",ch,ch);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char ch, ca,cr;
//	scanf("%c", &ch);
//	printf("ch=%c ch=%d\n",ch,ch);
//	scanf("%c%c", &ch, &ca);
//	printf("ch=%c ch=%d\n",ch,ch);
//	printf("ca=%c ca=%d\n",ca,ca);
//	scanf("%c%c%c", &ch, &ca,&cr);
//	printf("ch=%c ch=%d\n",ch,ch);
//	printf("ca=%c ca=%d\n",ca,ca);
//	printf("cr=%c cr=%d\n",cr,cr);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char str[20];
//	scanf("%s",str);
//	printf("%s",str);
//	return 0;
//}

//#include <stdio.h>
//#include <conio.h>
//int main()
//{
//	char ch;
//	ch=getche();
//	printf("\nch=%d:%c\n",ch,ch);
//	putchar(ch);
//	return 0;
//}

//#include <stdio.h>
//#include <conio.h>
//int main()
//{
//	int n=0;
//	while (1)
//	{
//		printf("%d%c",n,13);
//		n++;
//	}
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int myscore=0;
	int comscore=0;
	int my;
	int com;
	srand(time(NULL));
	int dice = rand()%6+1;
	for (int i=0; i<5; i++)
	{
		int dice = rand()%6+1;
		printf("몇이 나올지 예측하세요 : ");
		scanf("%d",&my);
		printf("\n");
		com = rand()%6+1;
		printf("컴퓨터의 예측 : %d\n",com);
		printf("\n");
		srand(time(NULL));
		int dic = rand()%6+1;
		printf("\n");
		printf("주사위 : %d\n",dice);
		if (my==dice && com==dice) 
		{
			printf("둘다 1점씩 획득!\n");
			myscore+=1;
			comscore+=1;
		}
		else if (my==dice)
		{
			printf("맞췄습니다! 1점획득!\n");
			myscore+=1;
		}
		else if (com==dice)
		{
			printf("컴퓨터가 맞췄네요 ㅠㅠ\n");
			comscore+=1;
		}
		else
		{
			printf("둘다 틀렸네요.\n");
		}
		printf("\n");
		printf("#### 현재점수 ####\n",i);
		printf("내 스코어 : %d 점\n",myscore);
		printf("컴퓨터 스코어 : %d\n",comscore);
		printf("\n");
	}
}
