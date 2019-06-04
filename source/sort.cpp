#include <iostream>

void swap(int x, int y){
    int temp = y;
    y =x;
    x = temp;
}

void bubble_sort(int* arr,int n){
    int max;
    int temp; 
    for(int i = 0; i < n; ++i){
        for(int j = 1; j < n; ++j){
            if( arr[i] > arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
}