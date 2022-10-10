#include <stdio.h>

// BUBBLE SORT

void bubble_sort(int arr[], int n) {
	int temp;

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}


// SELECTION SORT

void selection_sort(int arr[], int n) {
	int min_idx, temp;
	for (int i = 0; i < n - 1; i++)
	{
		min_idx = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[min_idx])
				min_idx = j;
		}
		if (min_idx != i) {
			temp = arr[i];
			arr[i] = arr[min_idx];
			arr[min_idx] = temp;
		}
	}
}


// INSERTION SORT

void insertion_sort(int arr[], int n) {
	int key, j;
	for (int i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}


// MERGE SORT

void merge(int arr[], int low, int mid, int high) {
	int n1 = mid - low + 1;
	int n2 = high - mid;

	int L[n1], R[n2], i, j, k;

	for (i = 0; i < n1; i++)
		L[i] = arr[low + i];

	for (j = 0; j < n2; j++)
		R[j] = arr[mid + 1 + j];

	i = j = 0;
	k = low;

	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		} else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1) {
		arr[k] = L[i];
		k++;
		i++;
	}
	while (j < n2) {
		arr[k] = R[j];
		k++;
		j++;
	}
}

void merge_sort(int arr[], int low, int high) {
	if (low < high) {
		int mid = low + (high - low) / 2;
		merge_sort(arr, low, mid);
		merge_sort(arr, mid + 1, high);
		merge(arr, low, mid, high);
	}
}

// QUICK SORT




// PRINT ARRAY

void print_arr(int arr[], int n) {
	for (int i = 0; i < n; ++i)
		printf("%d ", arr[i]);
}

int main()
{
	int arr[] = { 80, 90, 100, 40, 50, 30, 20, 70, 60, 10}, n = 10;

	bubble_sort(arr, n);

	print_arr(arr, n);

	return 0;
}