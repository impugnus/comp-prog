#include <stdio.h>
#include <stdlib.h>

int partition(int *a, int start, int end){
  int pivot = a[end];
  int idx = start;

  for(int i = start; i < end; i++){
    if(a[i] <= pivot){
      int temp = a[idx];
      a[idx] = a[i];
      a[i] = temp;

      idx++;
    }
  }
  int temp = a[end];
  a[end] = a[idx];
  a[idx] = temp;

  return idx;
}

void quick_sort(int *a, int start, int end){
  if(start >= end) return;

  int p_idx = partition(a, start, end);
  quick_sort(a, start, p_idx-1);
  quick_sort(a, p_idx+1, end);
}

int main(void){
  int a[] = {7,6,5,4,3,2,1,0};
  int sa = sizeof(a)/sizeof(a[0]);
  quick_sort(a, 0, sa);

  for(int i = 0; i < sa; i++){
    printf("%d ", a[i]);
  }
  printf("\n");

  return 0;
}
