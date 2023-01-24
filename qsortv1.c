// Quick sort in C
#include <stdio.h>
int partition(int array[], int low, int high) {
  int pivot = array[high];
  int i = (low - 1);
  int j,t;
  for (j = low; j < high; j++) {
	if (array[j] <= pivot) {
	  i++;
	  t= array[i];
	  array[i]=array[j];
	  array[j]=t;
    }
  }
	  t= array[i+1];
	  array[i+1]=array[high];
	  array[high]=t;
		
  // return the partition point
  return (i + 1);
}
void quickSort(int array[], int low, int high) {
  if (low < high) {
    int pi = partition(array, low, high);
    quickSort(array, low, pi - 1);
    quickSort(array, pi + 1, high);
  }
}







































void printArray(int array[], int size) {
  int i;
  for (i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

// main function
void main() {
  int data[] = {8, 7, 2, 1, 0, 9, 6};

  int n = sizeof(data) / sizeof(data[0]);

  printf("Unsorted Array\n");
  printArray(data, n);

  // perform quicksort on data
  quickSort(data, 0, n - 1);

  printf("Sorted array in ascending order: \n");
  printArray(data, n);
}