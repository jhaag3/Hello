#include<stdlib.h>
#include<stdio.h>

#include "stats.h"

//TODO: fix the error in this function
void readInArray(int *arr, int size) {
  int i;
  printf("Enter your list of numbers: ");
  for (i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }
  return;
}

int * generateRandomArray(int size) {
  int * randomArr = malloc(sizeof(int) * size);
  for(int i=0; i<size; i++) {
    randomArr[i] = rand();
  }
  return randomArr;
}

void printArray(const int *arr, int size) {
  printf("[");
  for(int i=0; i<size-1; i++) {
    printf("%d, ", arr[i]);
  }
  printf("%d]\n ", arr[size-1]);
}

double getMean(const int *arr, int size) {
  int sum = 0;
    for(int i=0; i<size; i++) {
      sum = sum + (arr[i]);
    }
    double Mean = (double) sum / size;
    return Mean;
}

int getMin(const int *arr, int size) {
  int min = arr[0];
    for(int i=1; i<(size); i++) {
      if(arr[i] < min) {
        min = arr[i];
      }
    }
      return min;
  }


int getMax(const int *arr, int size) {
  int max = arr[0];
    for(int i=1; i<(size); i++) {
      if(arr[i] > max) {
        max = arr[i];
      }
    }
      return max;

}
