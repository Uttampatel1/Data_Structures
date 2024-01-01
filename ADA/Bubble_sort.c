#include <stdio.h>

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

void bubbleSort(int array[], int size) {
  for (int step = 0; step < size - 1; ++step) {
    for (int i = 0; i < size - step - 1; ++i) {
      if (array[i] > array[i + 1]) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}

int main() {
  int data[] = {-2, 45, 0, 11, -9};
  int size = sizeof(data) / sizeof(data[0]);
  bubbleSort(data, size);
  printf("Sorted Array :\n");
  printArray(data, size);
}

// n = 5
// arr = 5 3 1 6 4

//     pase 1:
//         i = 0 
//         - 3 5 1 6 4          n = 5
//         i = 1               i stop = 3
//         - 3 1 5 6 4
//         i = 2
//         - 3 1 5 6 4
//         i = 3
//         - 3 1 5 4 6


//     pase 2:
//         i = 0 
//         - 1 3 5 4 6          i stop = 2
//         i = 1
//         - 1 3 5 4 6
//         i = 2
//         - 1 3 4 5 6

//     pase 3:
//         i = 0 
//         - 1 3 4 5 6
//                                flag = 1
//                                then stop 