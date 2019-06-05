#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "sorts.hpp"

/** Bubble Sort
 *  O(n^2), Omega(n)
 */
void bubble_sort(int* arr, int n) {
  for (int i = 0; i < (n - 1); i++) {
    if (arr[i] > arr[i + 1]) {
      arr[i] = arr[i] xor arr[i + 1];
      arr[i + 1] = arr[i] xor arr[i + 1];
      arr[i] = arr[i] xor arr[i + 1];
    }
  }
  if (n != 1) {
    bubble_sort(arr, n - 1);
  }
}
void swap(int*y , int* x){
  int temp;
  temp = *y;
  *y = *x;
  *x = temp;
}

/** Selection Sort
 * O(n^2), Omega(?), Theta(?)
 */
void selection_sort(int* arr, int n){
  for (int i = 1; i < n-1 ; ++i){
    int min= i;
    for (int j = i + 1; j < n; ++j){
      if(arr[j] > arr[min]) min = j;
    }
    swap (&arr[min],&arr[i]); 
  }
}


/** Insertion Sort
 * O(?), Omega(?), Theta(?)
 */
void insertion_sort(int* arr, int n){
  for (int i = 0; i < n; ++i){
    for(int j = i; j > 0 && (arr[j]< arr[j-1]);--j){
      swap(&arr[j], &arr[j-1]);
    }
  }
}
