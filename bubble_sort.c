

#include <stdio.h>

// perform the bubble sort
void bubbleSort(int array[], int size) {
  // loop to access each array element
  int f=0;
  for (int step = 0; step < size - 1; ++step) {
    // loop to compare array elements
    for (int i = 0; i < size - step - 1; ++i) {
      if (array[i] > array[i + 1]) {
        f=1;
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
    if(f==0)
      return;
  }
}

// print array
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() {
  int data[] = {-2, 45, 0, 11, -9};
  
  // find the array's length
  int size = sizeof(data) / sizeof(data[0]);

  bubbleSort(data, size);
  
  printf("Sorted Array in Ascending Order:\n");
  printArray(data, size);
}
