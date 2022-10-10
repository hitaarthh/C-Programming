#include <stdio.h>

// 	LINEAR SEARCH

int linear_search(int arr[], int n, int key) {
	for (int i = 0; i < n; i++) {
		if (arr[i] == key)
			return i;
	}
	return -1;
}

// BINARY SEARCH

int binary_search(int arr[], int n, int key) {
	int left = 0, right = n - 1, mid;

	while (left <= right)
	{
		mid = (left + right) / 2;

		if (arr[mid] < key)
			left = mid + 1;
		else if (arr[mid] > key)
			right = mid - 1;
		else
			return mid;
	}
	return -1;
}


// PRINT ARRAY

void print_arr(int arr[], int n) {
	for (int i = 0; i < n; ++i)
		printf("%d ", arr[i]);
}

int main()
{
	// int arr[] = { 80, 90, 100, 40, 50, 30, 20, 70, 60, 10}, n = 10;

	int arr2[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}, n = 10;

	int index = binary_search(arr2, n , 80);

	print_arr(arr2, n);

	if (index != -1)
		printf("\n\nValue found at position %d\n", index + 1);
	else
		printf("\n\nValue not found\n");

	return 0;
}