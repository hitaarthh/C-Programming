#include <stdio.h>

// HEAP SORT
void max_heapify(int arr[], int n, int i) {
	int max_idx = i;
	int left = i * 2 + 1;
	int right = i * 2 + 2;

	if (left < n && arr[left] > arr[max_idx])
		max_idx = left;

	if (right < n && arr[right] > arr[max_idx])
		max_idx = right;

	if (max_idx != i) {
		int temp = arr[i];
		arr[i] = arr[max_idx];
		arr[max_idx] = temp;

		max_heapify(arr, n, max_idx);
	}
}

void heap_sort(int arr[], int n) {
	for (int i = n / 2 - 1; i >= 0; i--)
		max_heapify(arr, n, i);

	for (int i = n - 1; i >= 0; i--) {
		int temp = arr[i];
		arr[i] = arr[0];
		arr[0] = temp;
		max_heapify(arr, i, 0);
	}
}


// PRINT ARRAY

void print_arr(int arr[], int n) {
	for (int i = 0; i < n; ++i)
		printf("%d ", arr[i]);
}

int main()
{
	int arr[] = { 80, 90, 100, 40, 50, 30, 20, 70, 60, 10}, n = 10;

	heap_sort(arr, n);

	print_arr(arr, n);

	return 0;
}