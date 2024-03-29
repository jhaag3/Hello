/**
 * Statistics main driver program
 */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "stats.h"

#define MAX_SIZE 500

int main(int argc, char** argv) {

  //seed the random number generator with the current time
  srand(time(NULL));

  int min, max, size;
  double mean;

  printf("Enter the amount of numbers you'd like to find the stats for: ");
  scanf("%d", &size);

  if(size > MAX_SIZE) {
    printf("ERROR: program does not support that many integers!");
	  exit(1);
	}

	//TODO: declare a static array "large enough" to hold as many integers as we'll need
//int arr[500];

	//TODO (Activity 3): change your delcaration and initialization to use
	// a dynamic array and malloc instead
int *arr = (int *) malloc(sizeof(int) * size);
	//TODO: pass the appropriate variable
	readInArray(arr, size);
//generateRandomArray(int size);
	//TODO: pass the appropriate variables to your functions here
  min = getMin(arr, size);
  max = getMax(arr, size);
  mean = getMean(arr, size);
  printArray(arr, size);


  printf("Min: %d\n", min);
  printf("Max: %d\n", max);
  printf("Mean: %.2f\n", mean);

  return 0;
}
