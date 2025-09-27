//#include <cstdio>
//int main()
//{
//	int n, k;
//	scanf("%d %d", &n, &k);
//	int coin[10];
//	for (int i = 0; i < n; i++)
//		scanf("%d", &coin[i]);
//	int count = 0;
//	for (int i = n - 1; i >= 0; i--)
//	{
//		if (k >= coin[i])
//		{
//			count += k / coin[i];
//			k %= coin[i];
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//    int price;
//    if (scanf("%d", &price) != 1) return 0;
//
//    int change = 1000 - price;
//    int coins[] = {500, 100, 50, 10, 5, 1};
//    int count = 0;
//
//    for (int i = 0; i < 6; i++) {
//        count += change / coins[i];
//        change %= coins[i];
//    }
//
//    printf("%d\n", count);
//    return 0;
//}

#include <stdio.h>
int min(int a, int b) {
    return a < b ? a : b;
}
int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int pack, single;
    int min_pack = 1000000;
    int min_single = 1000000;

    for (int i = 0; i < M; i++) {
        scanf("%d %d", &pack, &single);
        if (pack < min_pack) min_pack = pack;
        if (single < min_single) min_single = single;
    }
    if (min_single * 6 > min_pack) {
        min_single = min_pack;
    }
    int cost1 = (N / 6) * min_pack + (N % 6) * min_single;
    int cost2 = ((N / 6) + 1) * min_pack;

    int result = min(cost1, cost2);
    printf("%d\n", result);

    return 0;
}
