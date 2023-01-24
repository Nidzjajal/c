// Quick sort in C

#include <stdio.h>
// function to find the partition position
int partition(char *array[], int low, int high) {
  // select the rightmost element as pivot
  char *pivot = array[high],*t;
  // pointer for greater element
  int i = (low - 1);
  int j;
  // traverse each element of the array
  // compare them with the pivot
  for (j = low; j < high; j++) {
	if (strcmp(array[j],pivot)<0) {
       // if element smaller than pivot is found
      // swap it with the greater element pointed by i
	  i++;
	// swap element at i with element at j
	  t= array[i];
	  array[i]=array[j];
	  array[j]=t;
    }
  }

  // swap the pivot element with the greater element at i
	  t= array[i+1];
	  array[i+1]=array[high];
	  array[high]=t;

  // return the partition point
  return (i + 1);
}

void quickSort(char *array[], int low, int high) {
  if (low < high) {

    // find the pivot element such that
    // elements smaller than pivot are on left of pivot
    // elements greater than pivot are on right of pivot
    int pi = partition(array, low, high);

    // recursive call on the left of pivot
    quickSort(array, low, pi - 1);

    // recursive call on the right of pivot
    quickSort(array, pi + 1, high);
  }
}

// function to print array elements
void printArray(char *array[], int size) {
  int i;
  for (i =0; i<= size; ++i) {
    printf("\n%s", array[i]);
  }
  printf("\n");
}

// main function
void main() {
  char *data[5] = {"Ashok","Jay","Ketan","Bansi","Kumar"};
  int i;
  int n = 5;
  clrscr();
  printf("Unsorted Array\n");
  printArray(data, n-1);
  //perform quicksort on data
  quickSort(data, 0, n-1 );
  printf("Sorted array in ascending order: \n");
  printArray(data, n-1);
  getch();
}