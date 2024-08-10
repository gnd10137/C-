//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	for (int i=-n; i<=n; i++)
//	{
//		printf("%d",i);
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	for (int i=1; i<=n; i++)
//	{
//		if(i%3==0)
//		printf("%d",i);
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int a=70;
//	if(a<=15)
//	{
//		printf("ÁÁÀ½");
//	}
//	else if(15<a<=35)
//	{
//		printf("º¸Åë");
//	}
//	else if(35<a<=75)
//	{
//		printf("³ª»Ý");
//	}
//	else
//	{
//		printf("¸Å¿ì³ª»Ý");
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int a,b,n;
//	scanf("%d",&n);
//	scanf("%d %d",&a,&b);
//	if(n%a==0 && n%b==0)
//	{
//		printf("1");
//	}
//	else
//	{
//		printf("0");
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int a;
//	for (int i=1; i<=1000; i++)
//	if (i%3==0)
//	{
//		printf("%d\n",-i);
//	}
//	else if(i%3==1 || i%3==2)
//	{
//		printf("%d\n",i);
//	}
//}

#include <stdio.h>
int main()
{
	int sum, min, input;
	for(int i=0;i<4;i++)
		scanf("%d",&input);
		
		if(input%2==1)
		{
			sum+=input;
			if(min>input)
			{
				min=input;
			}
			
		}
	printf("%d\n",sum);
	printf("%d",min)
}
