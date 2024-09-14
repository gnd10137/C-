#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//int main()
//{
//	int sum=0;
//	srand(time(NULL));
//	int arr[10];
//	
//	for (int i = 0; i<10; i++)
//	{
//		arr[i] = rand()%9+1;
//	} 
//	for (int i = 0; i < 10; i++)
//	{
//		sum += arr[i];
//		printf("%d ",arr[i]);
//	}
//	printf("%d",sum);
//}

//#include <stdio.h>
//int main()
//{
//	char ch1, ch2;
//	
//	ch1 = 'A';
//	ch2 = 'a';
//	printf("%c", ch1+32);
//	printf("%c", ch2-32);
//	
//	printf("%c %c\n", ch1, ch2);
//	printf("%d %d\n", ch1, ch2);
//	
//	printf("%c %c\n", 66, 98);
//	printf("%d %d\n", 66, 98);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//		char ch;
//		
//		printf("문자를 입력하세요 :");
//		ch = getchar();
//		putchar(ch);
//		printf("%c %d\n", ch, ch);
//		return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a[] = "Hello";
//	printf("%d",sizeof(a));
//	printf("%c", a[5]);
//}

//#include <stdio.h>
//int main()
//{
//	char word[20];
//	printf("단어를 입력하세요 :");
//	scanf("%s", word);
//	printf("입력하신 단어는 %s 입니다", word);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char sentence[80];
//	
//	puts ("문장을 입력하세요 :");
//	gets (sentence);
//	puts (sentence);
//	printf("%s", sentence);
//	return 0;
//}

//#include <stdio.h>
//int main(){
//	char a;
//	printf("입력 :");
//	scanf("%c", &a);
//	
//	if (a >= 65 && a <= 91){
//		printf("출력 : %c", a+32);
//	}
//	else if (a >= 97 && a <= 123)
//	{
//		printf("출력 : %c", a-32);
//	}
//}

//#include <stdio.h>
//int main()
//{
//	for (int i = 65; i <= 90; i++){
//		printf("%c ", i);
//	}
//	for (int i = 97; i <= 122; i++){
//		printf("%c ", i);
//	}
//}

#include <stdio.h>
int main()
{
	char word[20];
	scanf ("%s", &word);
	
	for (int i = 0; word[i]; i++){
		printf("%c",word[i]-32);
	}
}
