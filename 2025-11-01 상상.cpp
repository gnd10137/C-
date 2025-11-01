//#include <bits/stdc++.h>
//
//int cmp(const void *a, const void *b) {
//    long long va = *(const long long *)a;
//    long long vb = *(const long long *)b;
//    if (va < vb) return -1;
//    else if (va > vb) return 1;
//    else return 0;
//}
//
//int main(void) {
//    int N;
//    long long M;
//    scanf("%d %lld", &N, &M);
//
//    long long *A = (long long *)malloc(sizeof(long long) * N);
//    if (A == NULL) return 1;
//
//    for (int i = 0; i < N; i++)
//        scanf("%lld", &A[i]);
//
//    qsort(A, N, sizeof(long long), cmp);
//
//    long long ans = 4000000000LL;
//    int left = 0, right = 0;
//
//    while (left < N && right < N) {
//        long long diff = A[right] - A[left];
//        if (diff >= M) {
//            if (diff < ans) ans = diff;
//            left++;
//        } else {
//            right++;
//        }
//        if (left == right) right++;
//    }
//
//    printf("%lld\n", ans);
//
//    free(A);
//    return 0;
//}

#include <cstdio>
int max(int a, int b) {return a > b ? a : b; }
int min(int a, int b) {return a > b ? a : b; }

int main(void)
{
	int n;
	scanf("%d", &n);
	int prev_max[3], prew_min[3], cur_max[3], cur_min[3];
	scanf("%d %d %d", &prew_min[0], cur_max[1], cur_min[2]);
	for (int i = 0; i < 3; i++)
	{
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		
		cur_max[0] = max(prew_max[0], prew_max[1]) + a;
		cur_max[1] = max(max(prew_max[0], prew_max[1]), prew_max[2]) + b;
		cur_max[2] = max(prew_max[1], prew_max[2]) + c;
		
		cur_min[0] = min(prew_min[0], prew_min[1]) + a;
		cur_min[1] = min(min(prew_min[0], prew_min[1]), prew_min[2]) + b;
		cur_min[2] = min(prew_min[1], prew_min[2]) + c;
		
		for (int j = 0; j < 3; j++)
		{
			prew_max[j] = cur_max[j];
			prew_min[j] = cur_min[j];
		}
	}
	int max_ans = max(max(prew_max[0], prew_max[1]), prew_max[2]);
	int min_ans = min(min(prew_min[0], prew_min[1]), prew_min[2]);
	
	printf("%d %d\n", max_ans, min_ans);
	return 0;
}
