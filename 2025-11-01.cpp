#include <bits/stdc++.h>
int compare(const void *a, const void *b)
{
	int num1 = *(int *)a;
	int num2 = *(int *)b;
	if (num1 < num2) return -1;
	if (num1 > num2) return 1;
	return 0;
}
int lower_a(int arr[], int size, int target)
{
	int left = 0, right = size;
	while(left < right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < target)
			left = mid + 1;
		else
			right = mid;
	}
	return left;
}
int upper_b(int arr[], int size, int target)
{
	int left = 0, right = size;
   	while (left < right)
   	{
      	int mid = (left + right) / 2;
      	if (arr[mid] <= target)
         	left = mid + 1;
      	else
         	right = mid;
    	}
    	return left;
}
int main()
{
	int n, m;
	scanf("%d", &n);
	int *cards = (int *)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &cards[i]);
	}
	qsort(cards, n, sizeof(int), compare);
	scanf("%d", &n);
	for (int i = 0; i < m; i++)
	{
		int num;
        scanf("%d", &num);
        int lower = lower_a(cards, n, num);
        int upper = upper_b(cards, n, num);
        printf("%d", upper - lower);
        if (i != m - 1) printf(" ");
	}
}
