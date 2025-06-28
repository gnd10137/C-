//#include <cstdio>
//#include <iostream>
//int a[1000000];
//void swap(int &x, int &y)
//{
//	int z = x;
//	x = y;
//	y = z;
//}
//int choosePivot (int row, int high)
//{
//	return low + (high-low)/2;
//}
//int partition (int low, int high)
//{
//	int pivotIndex = choosePivot(low, high);
//	int pivotValue = a[pivotIndex];
//	swap(a[pivotIndex], a[high]);
//	int storeIndex = low;
//	for (in i = low; i < high; i++)
//	{
//		if (a[i] < pivotValue)
//		{
//			swap(a[i], a[storeIndex]);
//			storeIndex += 1;
//		}
//	}
//	swap(a[storeIndex], a[high]);
//	return storeIndex;
//}
//void quicksort (int low, int high)
//{
//	if (low < high)
//	{
//		int pivot = partition(low, high);
//		quicksort(low, pivot - 1);
//		quicksort(pivot + 1, high);
//	}
//}
//int main()
//{
//	 int n;
//	 cin >> n;
//	 for (int i = 0; i < n; i++)
//	 {
//	 	cin >> a[i];
//	 }
//	 quicksort(0, n - 1);
//	 for (int i = 0; i < n; i++)
//	 {
//	 	printf("%d\n", a[i]);
//	 }
//	 return 0;
//}

//#include <cstdio>
//int a[1000000];
//int b[1000000];
//
//void merge(int start, int end)
//{
//	int mid = (start + end)/2;
//	int i = start;
//	int j = mid + 1;
//	int k = 0;
//	while (i <= mid && j <= end)
//	{
//		if (a[i] <= a[j])
//		{
//			b[k++] = a[i++];
//		}
//		else
//		{
//			b[k++] = a[i++];
//		}
//	}
//}
