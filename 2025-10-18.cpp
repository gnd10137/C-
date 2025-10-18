//#include bits/stdc++.h
//
//int n, m;
//int v[100000];
//
//int compare(const void *a, const void *b) {
//	int x = *(int*)a;
//	int y = *(int*)b;
//	if (x < y) return -1;
//	if (x > y) return 1;
//	return 0;
//}
//
//int binary_search(int num) {
//	int l = 0, r = n - 1;
//	while (l <= r) {
//		int mid = (l + r) / 2;
//		if (v[mid] == num)
//			return 1;
//		else if (v[mid] > num)
//			r = mid - 1;
//		else
//			l = mid + 1;
//	}
//	return 0;
//}
//
//int main() {
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//		scanf("%d", &v[i]);
//
//	qsort(v, n, sizeof(int), compare);
//
//	scanf("%d", &m);
//	for (int i = 0; i < m; i++) {
//		int x;
//		scanf("%d", &x);
//		printf("%d\n", binary_search(x));
//	}
//	return 0;
//}

#include <bits/stdc++.h>

int v[500000];
int n;

int binary_search(int num) {
    int l = 0, r = n - 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (v[mid] == num)
            return 1;
        else if (v[mid] > num)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return 0;
}

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int m, num;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);

    qsort(v, n, sizeof(int), compare);

    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &num);
        printf("%d ", binary_search(num));
    }

    return 0;
}
