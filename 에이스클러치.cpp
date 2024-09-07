//#include <stdio.h>
//int main()
//{
//	double height[4];
//	int j=2;
//	
//	height[0]=145.7;
//	height[1]=156.3;
//	height[j]=147.89;
//	j++;
//	height[j]=159.4;
//	printf("%lf",height[0]);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int ar[10]={10,20,30,40,50,60,70,80,90,100};
//	int br[10];
//	
//	for (int i=0; i<=9; i++)
//	{
//		br[i]=ar[i];
//		printf("%d ",br[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int ar[10]={5,2,1,5,6,7,8,9,4,2};
//	int min=100;
//	int index;
//	
//	for (int i=0; i<10; i++)
//	{
//		if (min>ar[i])
//		{
//			min=ar[i];
//			index=i;
//		}
//	}
//	printf("min : %d\n", min);
//	printf("index : %d", index);
//}

//#include <stdio.h>
//int main()
//{
//	int ar[101];
//	int n;
//	scanf("%d", &n);
//	
//	for (int i=0; i<n; i++)
//	{
//		scanf("%d ",&ar[i]);
//	}
//	int x,cnt=0;
//	scanf("%d",&x);
//	
//	for (int i=0; i<n; i++)
//	{
//		if (x==ar[i])
//		{
//			cnt++;
//		}
//	}
//	printf("%d ",cnt);
//}

#include <stdio.h>
int main()
{
	int n,x;
	scanf("%d %d",&n, &x);
	int ar[10001];
	for (int i=0; i<n; i++)
	{
		scanf("%d",&ar[i]);
	}
	for (int i=0; i<n; i++)
	{
		if(x>ar[i])
		{
			printf("%d ", ar[i]);
		}
	}
}
