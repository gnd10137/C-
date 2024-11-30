//#include <stdio.h>
//#include <conio.h>
//int main()
//{
//	int ch1, ch2;
//	
//	ch1 = getch();
//	ch2 = getch();
//	printf("%d %d\n", ch1, ch2);
//	printf("%x %x\n", ch1, ch2);
//	return 0;
//}

//#include <stdio.h>
//#include <conio.h>
//int main()
//{
//	unsigned char ch;
//	do
//	{
//		ch = getch();
//		printf("%d %x : %c\n", ch, ch, ch);
//	} while (ch != 13);
//	return 0;
//}

//#include <stdio.h>
//#include <conio.h>
//#include <windows.h>
//#define X_END 79
//#define Y_END 24
//
//void GotoXY(int x, int y);
//void Move_LeftRight_Key(char chr, int *x, int *y);
//
//int main()
//{
//	char key;
//	int x = 0, y = 0;
//	
//	do
//	{
//		system("cls");
//		GotoXY(x, y);
//		printf("@");
//		key = getch();
//		key = getch();
//		Move_LeftRight_Key(key, &x, &y);
//	} while (key != 27);
//}
//void GotoXY(int x, int y)
//{
//	COORD Pos = {x, y};
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
//}
//void Move_LeftRight_Key(char key, int *x1, int *y1)
//{
//	switch (key)
//	{
//		case 75:
//			*x1 = *x1 - 1;
//			if(*x1 < 1) 
//			{
//				*x1 = X_END;	
//			}
//			break;
//		case 77:
//			*x1 = *x1 + 1;
//			if(*x1 > X_END) 
//			{
//				*y1 = 1;	
//			}
//			break;
//		case 80:
//			*y1 = *y1 + 1;
//			if(*y1 > Y_END)
//			{
//				*y1 = 1;
//			 } 
//			break;
//		case 72:
//			*y1 = *y1 - 1;
//			if(*y1 < 1){
//				*y1 = Y_END;	
//			}
//			break;
//	}
//}

//#include <stdio.h>
//#include <windows.h>
//
//void GotoXY(int x, int y);
//
//int main()
//{
//	int x, y = 5;
//	
//	for(x=1; x<80; x+=2)
//	{
//		system("cls");
//		GotoXY(x, y);
//		printf("бс");
//		Sleep(100);
//	}
//	printf("\n");
//}
//void GotoXY(int x, int y)
//{
//	COORD Pos = {x - 1, y - 1};
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
//}

//#include <stdio.h>
//int main()
//{
//	int n;
//	int sum=0;
//	scanf("%d", &n);
//	for (int i = 0; i <= n; i++)
//	{
//		sum += i;
//		
//	}printf("%d", sum);
//}

//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		if (n % i == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//}

#include <stdio.h>
int main()
{
	int n;
	int sum=0;
	int sum1 = 0;
	for (int i = 1; i <= 10; i++)
	{
		if (i % 2 == 0)
		{
			sum += i;
			printf("%d\n",sum);
		}
		else
		{
			sum1 += i;
			printf("%d", sum1);
		}
	}
}
