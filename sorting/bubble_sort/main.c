#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int a[], int n){
  for(int k = 0; k < n; k++){
    int was_swapped = 0;

    for(int i = 0; i < n-k-1; i++){
      if(a[i] > a[i+1]){
        int temp = a[i];
        a[i] = a[i+1];
        a[i+1] = temp;
        was_swapped = 1;
      }
    }

    if(was_swapped == 0) break;
  }
}

int main(void){
  int a[] = {2,7,4,1,5,3};
  int n = sizeof(a)/sizeof(a[0]);

  bubble_sort(a, n);
  for(int i = 0; i < n; i++) printf("%d ", a[i]);
  printf("\n");

  return 0;
}
