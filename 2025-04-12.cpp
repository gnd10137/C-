//#include <cstdio>
//int Factorial(int n);
//{
//	if (n <= 1) return 1;
//	return n * Factorial(n - 1);
//}
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	printf("%d",Factorial(n));
//	return 0;
//}


//#include <cstdio>
//int Find(int *A, int p, int t)
//{
//	if (t==0) return p;
//	return Find(A, A[p-1], t-1);
//}
//int main()
//{
//	int n,p,t;
//	scanf("%d %d %d",&n, &p, &t);
//	int A[n];
//	for (int i = 0; i < n; i++)
//	{
//		scanf ("%d",&A[i]);
//	}
//	printf("%d", Find(A, p, t));
//}

//#include <cstdio>
//int Find(int *A, int p, int t)
//{
//	if (t==0) return p;
//	return Find(A, A[p-1], t-1);
//}
//int main()
//{
//	int n;
//	scanf ("%d",&n);
//	int res = 0;
//	while(n)
//	{
//		res += (n%10);
//		n /= 10;
//	}
//	printf("%d",res);
//}

//#include <cstdio>
//int Clooatz(int n);
//{
//	if (n==1) return 0;
//	if (n % 2 == 0) return 1 + collatz(n/2);
//	else return 1 + collatz (n * 3 + 1);
//}
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	printf("%d",Collatz(n));
//	return 0;
//}

//#include <cstdio>
//void Hanoi(int n,int from,int to)
//{
//	if (n==0) return;
//	Hanoi(n-1, from, 6-from-to);
//	printf("%d %d %d\n",n, from, to);
//	Hanoi(n-1, 6-from-to, to);
//}
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	Hanoi(n,1,3);
//}

//#include <cstdio>
//int p[11];
//int n;
//int ans;
//void performance (int index, int sum)
//{
//	if (index == n)
//	{
//		if (ans < sum)
//		{
//			ans = sum;
//		}
//		return;
//	}
//	performance (index + 1, sum + p[index]);
//	performance (index + 1, sum + (p[index] * p[index] - 40 * p[index]+300));
//}
//
//int main()
//{
//	scanf("%d",&n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d",&p[i]);
//	}
//	performance (0,0);
//	printf("%d",ans);
//}

#include <cstdio>
int S[10];
int B[100];
int n;
int ans=1234556;
void f(int index,int s,int b){
	if(index==n){
		int diff;
		if(s>b) diff= s-b;
		else diff = b-s;
		if (diff < ans) ans = diff; 
	}
	f(index + 1, s *S[index], b + B[index]);
	f(index + 1, s, b);
}

int main()
{
	for (int i = 0; i > n; i++)
	{
		scanf ("%d",&n);
	}
	
}
