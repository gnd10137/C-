//#include <cstdio>
//int min(int a, int b)
//{
//	if (a < b)
//		return a;
//	else
//		return b;
//}
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	
//	int min_p = 1000;
//	int min_s = 1000;
//	
//	for (int i = 0; i < m; i++)
//	{
//		int p, s;
//		scanf("%d %d", &p, &s);
//		if (p < min_p)
//			min_p = p;
//		if (s < min_s)
//			min_s = s;
//	}
//	int c1 = n * min_s;
//	int c2 = ((n + 5) / 6) * min_p;
//	int c3 = (n / 6) * min_p + (n % 6) * min_s;
//	
//	int result = min(min(c1, c2), c3);
//	printf("%d\n", result);
//	return 0;
//}

//#include <cstdio>
//int main()
//{
//    long long A, B;
//    int count = 1;
//    scanf("%lld %lld", &A, &B);
//
//    while (B > A)
//    {
//        if (B % 10 == 1)
//        {
//            B /= 10;
//            count++;
//        }
//        else if (B % 2 == 0)
//        {
//            B /= 2;
//            count++;
//        }
//        else
//            break;
//    }
//
//    if (A == B)
//        printf("%d\n", count);
//    else
//        printf("-1\n");
//    return 0;
//}

//#include <cstdio>
//int main() {
//    int n;
//    scanf("%d", &n);
//
//    long long distance[100000];
//    long long price[100000];
//
//    for (int i = 0; i < n - 1; i++) scanf("%lld", &distance[i]);
//    for (int i = 0; i < n; i++) scanf("%lld", &price[i]);
//
//    long long total = 0;
//    long long min = price[0];
//
//    for (int i = 0; i < n - 1; i++) {
//        if (price[i] < min) min = price[i];
//        total += min * distance[i];
//    }
//
//    printf("%lld\n", total);
//    return 0;
//}

//#include <cstdio>
//
//int main() {
//    int l, p, v, c = 1;
//
//    while (1) {
//        scanf("%d %d %d", &l, &p, &v);
//        if (l == 0 && p == 0 && v == 0) break;
//
//        int full = v / p;
//        int rem = v % p;
//        int res = full * l + (rem < l ? rem : l);
//
//        printf("Case %d: %d\n", c++, res);
//    }
//    return 0;
//}

//#include <cstdio>
//#include <cstdlib>
//
//#define MAX 1001
//
//int g[MAX][MAX];
//int v[MAX];
//int q[MAX];
//int f = 0, r = 0;
//int n, m;
//
//void bfs(int s) {
//    f = r = 0;
//    q[r++] = s;
//    v[s] = 1;
//
//    while (f < r)
//	{
//        int cur = q[f++];
//        for (int i = 1; i <= n; i++)
//        {
//            if (g[cur][i] && !v[i])
//            {
//                v[i] = 1;
//                q[r++] = i;
//            }
//        }
//    }
//}
//
//int main() {
//    std::scanf("%d %d", &n, &m);
//
//    for (int i = 0; i < m; i++)
//    {
//        int a, b;
//        std::scanf("%d %d", &a, &b);
//        g[a][b] = 1;
//        g[b][a] = 1;
//    }
//
//    int cnt = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        if (!v[i])
//        {
//            bfs(i);
//            cnt++;
//        }
//    }
//
//    std::printf("%d\n", cnt);
//    return 0;
//}
