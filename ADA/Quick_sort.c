#include <stdio.h>

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int partition(int array[], int low, int high) {

  int pivot = array[high];
  int i = (low - 1);

 
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
      i++;
      int temp = array[i];
      array[i] = array[j];
      array[j] = temp;
    }
  }

  int temp = array[i+1];
  array[i+1] = array[high];
  array[high] = temp;
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {
    int pi = partition(array, low, high);
    quickSort(array, low, pi - 1);
    quickSort(array, pi + 1, high);
  }
}

int main() {
  int data[] = {8, 7, 2, 1, 0, 9, 6};
  int n = sizeof(data) / sizeof(data[0]);
  
  printf("Unsorted Array\n");
  printArray(data, n);
  quickSort(data, 0, n - 1);
  printf("Sorted array : \n");
  printArray(data, n);
}