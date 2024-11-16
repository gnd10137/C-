//#include <stdio.h>
//#include <conio.h>
//#include <windows.h> 
//int main()
//{
//	int x,y;
//	COORD pos = {40, 12};
//
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//	printf("Hello C3coding");
//	getch();
//	return 0;
//}

//#include <stdio.h>
//#include <conio.h>
//#include <windows.h>
//
//int main()
//{
//	int x, y;
//	COORD pos = {1, 0};
//	
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//	printf("←: 커서 시작위치(%d, %d)", pos.X, pos.Y);
//	getch();
//	
//	pos.X = 10;
//	pos.Y = 2;
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//	printf("←: 커서 시작위치(%d, %d)", pos.X, pos.Y);
//	getch();
//	
//	pos.X = 20;
//	pos.Y = 5;
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//	printf("←: 커서 시작위치(%d, %d)", pos.X, pos.Y);
//	getch();
//	
//	pos.X = 40;
//	pos.Y = 12;
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//	printf("←: 커서 시작위치(%d, %d)", pos.X, pos.Y);
//	getch();
//	
//	pos.X = 40;
//	pos.Y = 24;
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//	printf("←: 커서 시작위치(%d, %d)", pos.X, pos.Y);
//	getch();
//}

//#include <stdio.h>
//#include <conio.h>
//#include <windows.h>
//int DotoXY(int x, int y);
//int main()
//{
//	COORD pos;
//	
//	do
//	{
//		pos.X=30;
//		pos.Y=24;
//		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//		
//		printf("좌표 : ");
//		scanf("%d%d", &pos.X, &pos.Y);
//		GotoXY(pos.X, pos.Y);
//		printf("%s", "♡");
//		
//		pos.X = 30;
//		pos.Y = 24;
//		GotoXY(pos.X, pos.Y);
//		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//		printf("                     "); 
//	} while (1);
//	
//	return 0;
//}
//
//void GotoXY(int x, int y){
//	COORD pos;
//	pos.X = x;
//	pos.Y = y;
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//}

#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

void GotoXY(int x, int y);
void MyDelay(int d);

int main()
{
	int i;
	int p = 0;
	char c;
	c = getch();
	
	if (c=='w')
	{
		for (i = 65; i <= 74; i++)
		{
			GotoXY(40,12+p);
			printf("%c", i);
			p--;
			Sleep(1000);
			//MyDelay(s);
		}
	}
	else if (c== 's')
	{
		for (i = 65; i <= 73; i++)
		{
			GotoXY(40,12-p);
			printf("%c", i);
			p--;
			Sleep(1000);
		}
	}
	else if (c== 'a')
	{
		for (i = 65; i <= 73; i++)
		{
			GotoXY(40+p, 10);
			printf("%c", i);
			p--;
			Sleep(1000);
		}
	}
	else
	{
		for (i = 65; i <= 74; i++)
		{
			GotoXY(40+ p, 12);
			printf("%c", i);
			p++;
			Sleep(1000);
		}
	}
	return 0;
}
void GotoXY(int x, int y)
{
	COORD pos = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void MyDelay(int d)
{
	for (int i = 0; i < d*10000000; i++)
	{
		
	}
}
