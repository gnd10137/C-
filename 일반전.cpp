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
		printf("���� ������ �����ϼ��� : ");
		scanf("%d",&my);
		printf("\n");
		com = rand()%6+1;
		printf("��ǻ���� ���� : %d\n",com);
		printf("\n");
		srand(time(NULL));
		int dic = rand()%6+1;
		printf("\n");
		printf("�ֻ��� : %d\n",dice);
		if (my==dice && com==dice) 
		{
			printf("�Ѵ� 1���� ȹ��!\n");
			myscore+=1;
			comscore+=1;
		}
		else if (my==dice)
		{
			printf("������ϴ�! 1��ȹ��!\n");
			myscore+=1;
		}
		else if (com==dice)
		{
			printf("��ǻ�Ͱ� ����׿� �Ф�\n");
			comscore+=1;
		}
		else
		{
			printf("�Ѵ� Ʋ�ȳ׿�.\n");
		}
		printf("\n");
		printf("#### �������� ####\n",i);
		printf("�� ���ھ� : %d ��\n",myscore);
		printf("��ǻ�� ���ھ� : %d\n",comscore);
		printf("\n");
	}
}
