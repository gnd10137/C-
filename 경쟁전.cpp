//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	FILE *fp = fopen("werwer", "r");
//	
//	if (fp == NULL)
//	{
//		printf("파일이 없습니다.");
//		exit(1);
//	}
//	fclose(fp);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	FILE *fp;
//	fp = fopen("CharOut.txt", "w");
//	if (fp == NULL)
//	{
//		printf("파일 없음\n");
//		exit(1);
//	}
//	fputc('A', fp);
//	fputc('B', fp);
//	fputc('\n', fp);
//	fputc(97, fp);
//	fputc(98, fp);
//	
//	fclose(fp);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	FILE *out = fopen("StringFile.txt", "w");
//	char str1[] = "Hello C3Coding";
//	char str2[] = "안녕하세요 씨큐브코딩입니다.\n";
//	
//	if (out == NULL)
//	{
//		printf("파일 없음\n");
//		exit(1);
//	}
//	fputs("문자열을 출력합니다.\n", out);
//	fputs(str1, out);
//	fputs("\n", out);
//	fputs(str2, out);
//	
//	fclose(out);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	FILE *in = fopen("Stringfile.txt", "r");
//	char str1[30];
//	char str2[30];
//	char str3[30];
//	
//	if (in == NULL)
//	{
//		printf("파일 없음\n");
//		exit(1);
//	}
//	fgets(str1,sizeof(str1), in);
//	fgets(str2,sizeof(str2), in);
//	fgets(str3,sizeof(str3), in);
//	
//	puts(str1);
//	printf("%s", str2);
//	fputs(str3, stdout);
//	fclose(in);
//	return 0;
//}

//#include <stdio.h>
//int plus()
//{
//	int a = 3;
//	int b = 2;
//	printf("%d",a+b);
//}
//int main()
//{
//	plus();
//	printf("5");
//}

//#include <stdio.h>
//int plus()
//{
//	int a = 3;
//	int b = 2;
//	return a+b;
//}
//int main()
//{
//	int num = plus();
//	printf("%d\n", num);
//	printf("%d\n", plus());
//	printf("%d\n", plus()+10);
//}

//#include <stdio.h>
//int sum(int n)
//{
//	int hap = 0;
//	for (int i = 1; i <= n; i++){
//		hap += i;
//	}
//	return hap;
//}
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	printf("%d", sum(n));
//}

//#include <stdio.h>
//int power(int n)
//{
//	return n*n;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int result = power(n);
//	printf("%d", result);
//}

#include <stdio.h>
int	ShowSum(int a, int b)
{
	int hap = 0;
	if (a>b)
	{
		for (int i = b; i <= a; i++){
			printf("%d ", i);
			hap += i;
		}
	}
	else{
		for (int i = a; i <= b; i++){
			printf("%d ", i);
			hap += i;
		}
	}
	return hap;
}
int main()
{
	int sum;
	int a, b;
	scanf("%d %d", &a, &b);
	sum = ShowSum(a, b);
	printf("\n합 : %d", sum);
}
