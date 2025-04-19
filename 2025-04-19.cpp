//#include <cstdio>
//int ans = 1234567890;
//int S[10], B[10];
//int n;
//
//void solution (int index, int s, int b,int count)
//{
//	if(index==n)
//	{
//		int diff;
//		if (s>b) diff = s-b;
//		else diff = b-s;
//		if (diff<ans) ans = diff;
//		return;
//	}
//	solution(index+1,s,b,count+1);
//	solution(index+1,s*S[index],b+B[index],count);
//}
//int main()
//{
//	scanf("%d",&n);
//	for (int i = 0; i< n; i++)
//	{
//		scanf("%d %d",&S[i], &B[i]);
//	}
//	solution(0,1,0,0);
//	printf("%d",ans);
//	return 0;
//}

//#include <cstdio>
//int main()
//{
//	char str[1001];
//	scanf("%[^\n]",str);
//	for (int i = 0; str[i]; i++)
//	{
//		if ('A'<=str[i] && str[i]<='Z')
//		{
//			str[i] += 32;
//		}
//	}
//	printf("%s",str);
//}

//#include <cstdio>
//int main()
//{
//	char str[1001];
//	scanf("%s",str);
//	int count[26]={0,};
//	for (int i = 0; str[i]; i++)
//	{
//		if ('a' <= str[i] && str[i] <= 'z')
//		{
//			str[i] = str[i] - 32;
//		}
//		count[str[i]-'A']++;
//	}
//	for (int i = 0; i <26; i++)
//	{
//		printf("%d ",count[i]);
//	}
//}

//#include <cstdio>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	char str[1001];
//	scanf("%s",str);
//	for (int i = 0; str[i]; i++)
//	{
//		printf("%c",(((str[i]+n)-'A')%26)+'A');
//	}
//}

//#include <cstdio>
//int main()
//{
//	char str[1001];
//	int check[26];
//	scanf("%s",str);
//	for (int i = 0; i < 26; i++)
//	{
//		check[i]=-1;
//	}
//	for (int i = 0; str[i]; i++)
//	{
//		if (check[str[i]-'a'] == -1)
//		{
//			check[str[i]-'a']= i;
//		}
//	}
//	for (int i = 0; i<26; i++)
//	{
//		printf("%d ",check[i]);
//	}
//}

//#include <cstdio>
//int main()
//{
//	char str_a[1001];
//	char str_b[1001];
//	int d,l,index=0;
//	scanf("%d %d",&d, &l);
//	scanf("%s",str_a);
//	for (int i = 0; str_a[i]; i++)
//	{
//		if (str_b[index])
//		{
//			index++;
//		}
//		str_b[index] = str_a[i];
//		index=index+d;
//		if (index >= l)
//		{
//			index -= l;
//		}
//	}
//	printf("%s",str_b);
//}

#include <cstdio>
int main()
{
	int n;
	char a[1001];
	char b[1001];
	scanf("%d",&n);
	scanf("%s",a);
	scanf("%s",b);
	for (int i = 0; a[i]; i++)
	{
		bool check = true;
		for (int j = 0; b[j]; j++)
		{
			if (a[(i+j)%n] != b[j])
			{
				check = false;
			}
		}
		if (check)
			{
				printf("Yes");
				return 0;
			}
	}
	printf("No");
}
