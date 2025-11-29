//#include <cstdio>
//int main()
//{
//	long long a[15], max = 0;
//	for (int i = 0; i < 15; i++)
//		scanf("%lld", &a[i]);
//	for (int i = 0; i < 14; i++)
//		if (max < a[i])
//			max = a[i];
//	long long l = max + 1;
//	if(l < a[14]) l = a[14];
//    	printf("%lld\n", l);
//}

//#include <cstdio>
//int score(char a, char b)
//{
//	if (a == 'R')
//	{
//        if (b == 'R') return 1;
//        if (b == 'S') return 2;
//        return 0;
//    }
//    if (a == 'S')
//    {
//    	if (b == 'S') return 1;
//        if (b == 'P') return 2;
//        return 0;
//    }
//    if (a == 'P')
//    {
//        if (b == 'P') return 1;
//        if (b == 'R') return 2;
//        return 0;
//    }
//    return 0;
//}
//
//int main()
//{
//	int a, b, c, d, e;
//	char f[1001], g[1001][1001], h[3] = {'R', 'S', 'P'};
//	scanf("%d", &a);
//	scanf("%s", f);
//	scanf("%d", &b);
//	for(c = 0; c < b; c++) scanf("%s", g[c]);
//    int cur = 0, best = 0;
//
//    for(c = 0; c < a; c++)
//    {
//        for(d = 0; d < b; d++)
//        {
//            cur += score(f[c], g[d][c]);
//        }
//    }
//    for (c = 0; c < a; c++)
//    {
//    	int max = 0;
//    	for(e = 0; e < 3; e++)
//    	{
//            int t = 0;
//            for(d = 0; d < b; d++) t += score(h[e], g[d][c]);
//            if(t > max) max = t;
//        }
//        best += max;
//	}
//	printf("%d\n%d\n", cur, best);
//}

//#include <cstdio>
//int main() {
//    int n, m;
//    scanf("%d %d", &n, &m);
//
//    int cards[101];
//    for(int i = 0; i < n; i++) scanf("%d", &cards[i]);
//
//    int best = 0;
//
//    for(int i = 0; i < n-2; i++)
//    {
//        for(int j = i+1; j < n-1; j++)
//        {
//            for(int k = j+1; k < n; k++)
//            {
//            	int sum = cards[i] + cards[j] + cards[k];
//                if(sum <= m && sum > best) best = sum;
//            }
//        }
//    }
//
//    printf("%d\n", best);
//    return 0;
//}

//#include <cstdio>
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a;
//	cin >> a;
//	int b = 0;
//	
//	for (int i = 1; i <= a; i++)
//	{
//		if (i < 100)
//			b++;
//		else
//		{
//			int c = i / 100;
//            int d = (i / 10) % 10;
//            int e = i % 10;
//            if(c - d == d - e)
//            	b++;
//		}
//	}
//	cout << b << '\n';
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//    int A, B, C, N;
//    cin >> A >> B >> C >> N;
//
//    int p = 0;
//
//    for (int i = 0; i <= N / A; i++)
//    {
//        for (int j = 0; j <= N / B; j++)
//        {
//            for (int k = 0; k <= N / C; k++)
//            {
//                if (A * i + B * j + C * k == N)
//                    p = 1;
//            }
//        }
//    }
//
//    cout << p << '\n';
//    return 0;
//}
