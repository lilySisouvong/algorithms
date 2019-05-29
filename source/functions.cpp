#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "functions.hpp"

int abs_val(int x) {
  return (x > 0) ? x : x * -1;
}

int pow(int base, int num) {
  int ret = 1;
  for (int i = 0; i < num; ++i) {
    ret *= base;
  }
  return ret;
}

int log(int base, int num) {
  int count = 0;
  for (num; num > 1; num /= base)
    ++count;
  return count;
}

int chartoint(char c) {
  int result = (int)c;
  result -= '0';
  return result;
}

char inttochar(int x) {
  return (char)(x + '0');
}

char chr(int x) {
  return (char)x;
}

int ord(char c) {
  return (int)c;
}

int max(int x, int y) {
  return (x > y) ? x : y;
}

int max(int x, int y, int z) {
  return max(x, max(y, z));
}

/** Max.
 * Returns the maximum element from the parameters given.
 * O(?)
 */

int max(int arr[], int n){
  int largest= arr[0];
  for(i=1; i < n; ++=){
    if(arr[i] > largest){
      largest = arr[i];
    }
  }
  return largest;
}

int min(int arr[], int n)
  int smallest= arr[0];
    for(i=1; i < n; ++=){
      if(arr[i] < smallest){
        smallest = arr[i];
      }
    }
    return smallest;
  }

  bool all(bool arr[], int n){
    for()
  return something;
  }



int min(int x, int y) {
  return (x < y) ? x : y;
}

int min(int x, int y, int z) {
  return min(x, min(y, z));
}

int round(double x, char c) {
  if (x > 0) {
    return (c == 'd') ? (int)x : (int)x + 1;
  } else {
    return (c == 'd') ? (int)x - 1 : (int)x;
  }
}


bool is_sorted(int arr[], int n);