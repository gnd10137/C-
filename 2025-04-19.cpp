//#include <cstdio>
//	int One(int n)
//	{
//		return (n-2)*(n+1)*n/2;
//	}
//	int Two(int n)
//	{
//		return (n*n*n)-((n-1)*(n-1));
//	}
//	int Three(int n)
//	{
//		return (3*n*n*n)-(n*n)-(3*n);
//	}
//	int main()
//	{
//		int n,m;
//		scanf("%d %d",&n,&m);
//		if  (m == 1) printf("%d",One(n));
//		else if (m == 2) printf("%d",Two(n));
//		else printf("%d",Three(n));
//		return 0;
//	}

//#include <cstdio>
//int Sum(int n)
//{
//	if (n==0) return 0;
//	return n%10+Sum(n/10);
//}
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	printf("%d",Sum(n));
//	return 0;
//}

//#include <cstdio>
//int Collatz(int n)
//{
//	if (n==1) return 0;
//	if (n%2==0) return 1+Collatz(n/2);
//	else return 1+ Collatz(n*3+1);
//}
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	printf("%d",Collatz(n));
//	return 0;
//}

//#include <cstdio>
//void Hanoi (int n,int from, int to)
//{
//	if (n==0) return;
//	Hanoi (n-1,from,6-from-to);
//	printf("%d %d %d\n",n, from, to);
//	Hanoi(n-1, 6-from-to,to);
//}
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	Hanoi(n,1,3);
//	return 0;
//}

#include <cstdio>
int n;
int p[11];
int ans;
void Performance(int index, int sum)
{
	if (index == n)
	{
		if (ans < sum) ans = sum;
		return;
	}
	int p_first = p[index];
	int p_second = p[index] * p[index] - 40 * p[index] + 300;
	Performance(index + 1, sum+p_first);
	Performance(index + 1, sum+p_second);
}
int main()
{
	scanf("%d",&n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&p[i]);
	}
	Performance(0,0);
	printf("%d",ans);
	return 0;
}
