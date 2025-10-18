#include <bits/stdc++.h>
int compare(const void *a, const void *b) {
    int num1 = *(int *)a;
    int num2 = *(int *)b;
    if (num1 < num2) return -1;
    if (num1 > num2) return 1;
    return 0;
}

int lower_bound(int arr[], int size, int target) {
    int left = 0, right = size;
    while (left < right) {
        int mid = (left + right) / 2;
        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid;
    }
    return left;
}

int upper_bound(int arr[], int size, int target) {
    int left = 0, right = size;
    while (left < right) {
        int mid = (left + right) / 2;
        if (arr[mid] <= target)
            left = mid + 1;
        else
            right = mid;
    }
    return left;
}

int main() {
    int N, M;
    scanf("%d", &N);
    int *cards = (int *)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++)
        scanf("%d", &cards[i]);

    qsort(cards, N, sizeof(int), compare);

    scanf("%d", &M);
    for (int i = 0; i < M; i++)
    {
        int num;
        scanf("%d", &num);
        int lower = lower_bound(cards, N, num);
        int upper = upper_bound(cards, N, num);
        printf("%d", upper - lower);
        if (i != M - 1) printf(" ");
    }
