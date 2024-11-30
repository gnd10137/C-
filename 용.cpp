//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", n);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a,b,c;
//	scanf("%d", &a);
//	printf("a = %d\n",a);
//	scanf("%d%d", &a, &b);
//	printf("a = %d b = %d\n", a,b);
//	scanf("%d%d%d", &a, &b, &c);
//	printf("a = %d b = %d c = %d c = %d\n", a,b,c);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char c1 = 'A';
//	char c2 = 'B';
//	
//	printf("%d\n", c1 + c2);
//	printf("%d\n", c1 > c2);
//	printf("%d\n", c1 == 'A');
//	printf("%d\n", 'b' > c2);
//	printf("%d\n", 'a' - c1);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char *sp1 = "C3coding";
//	char *sp2 = "C3coding";
//	
//	printf("%d\n", sp1 == sp2);
//	printf("%d\n", sp1 == "C3coding");
//	printf("%d\n", sp2 == "C3coding");
//	printf("%d\n", "C3coding" == "C3coding");
//	printf("%d\n", sp1 == "C3coding");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char str1[] = "C3coding";
//	char str2[] = "C3coding";
//	
//	printf("%d\n", str1 == str2);
//	printf("%d\n", str1 == "C3coding");
//	printf("%d\n", str2 == "C3coding");
//	printf("%d\n", "C3coding" == "C3coding");
//	printf("%d\n", str1 == "C3coding");
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char *sp = "C3coding";
//	char str[] = "C3coding";
//	int res;
//
//	res = strcmp(sp, str);
//	printf("%d\n", res);
//	res = strcmp(sp, "C3coding");
//	printf("%d\n", res);
//	res = strcmp("C3coding", "C3coding");
//	printf("%d\n", res);
//	
//	res = strcmp("test", "text");
//	printf("%d\n", res);
//	res = strcmp("text", "test");
//	printf("%d\n", res);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char name1[10];
//	char name2[10];
//	strcpy(name1, "가");
//	strcpy(name2, "나");
//	printf("%d\n", strcmp(name1, name2));
//	printf("%d\n", strcmp("나", "가"));
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char start[15] = "C3";
//	char end[15] = "coding";
//	int len;
//	
//	printf("start = %s %d\n", start, strlen(start));
//	printf("end = %s %d\n", end, strlen(end));
//	
//	strcat(start, end);
//	len = strlen(start);
//	printf("%s %d\n", start, len);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char c1 = 'A';
//	char c2 = 'B';
//	
//	printf("%d\n", c1 + c2);
//	printf("%d\n", c1 > c2);
//	printf("%d\n", c1 == 'A');
//	printf("%d\n", 'b' > c2);
//	printf("%d\n", 'a' - c1);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char *sp1 = "C3coding";
//	char *sp2 = "C3coding";
//	
//	printf("%d\n", sp1 == sp2);
//	printf("%d\n", sp1 == "C3coding");
//	printf("%d\n", sp2 == "C3coding");
//	printf("%d\n", "C3coding" == "C3coding");
//	printf("%d\n", sp1 == "C3coding");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char str1[] = "C3coding";
//	char str2[10] = "C3coding";
//	
//	printf("%d\n", str1 == str2);
//	printf("%d\n", str1 =="C3coding");
//	printf("%d\n", str2 == "C3coding");
//	printf("%d\n", "C3coding" == "C3coding");
//	printf("%d\n", str1 == "C3coding");
//	return 0;
//}

//#include <stdio.h>
//#include <conio.h>
//#include <windows.h>
//
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
//int main()
//{
//	int x, y;
//	COORD pos = {1, 0};
//	
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//	printf("←:  커서 시작위치(%d %d)", pos.X, pos.Y);
//	getch();
//	
//	pos.X = 10;
//	pos.Y = 2;
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//	printf("←:  커서 시작위치(%d %d)", pos.X, pos.Y);
//	getch();
//	
//	pos.X = 20;
//	pos.Y = 5;
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//	printf("←:  커서 시작위치(%d %d)", pos.X, pos.Y);
//	getch();
//	
//	pos.X = 40;
//	pos.Y = 12;
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//	printf("←:  커서 시작위치(%d %d)", pos.X, pos.Y);
//	getch();
//	
//	pos.X = 40;
//	pos.Y = 24;
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//	printf("←:  커서 시작위치(%d %d)", pos.X, pos.Y);
//	getch();
//	
//	return 0;
//}

#include <stdio.h>
#include <conio.h>
#include <windows.h>

void GotoXY(int x, int y);
int main()
{
	COORD pos;
	
	do
	{
		pos.X = 30;
		pos.Y = 24;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		
		printf("좌표 : ");
		scanf("%d%d", &pos.X, &pos.Y);
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		printf("%s", "♡");
		
		pos.X = 30;
		pos.Y = 24;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		printf("                     ");
	} while (1);
	
	return 0;
}
