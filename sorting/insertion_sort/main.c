#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int a[], int sa){
  for(int i = 1; i < sa; i++){
    int value = a[i];
    int hole = i;

    while(hole > 0 && a[hole-1] > value){
      a[hole] = a[hole-1];
      hole-=1;
    }

    a[hole] = value;
  }
}

int main(void){
  int a[] = {2,7,4,1,5,3};
  int sa = sizeof(a)/sizeof(a[0]);

  insertion_sort(a, sa);
  for(int i = 0; i < sa; i++) printf("%d ", a[i]);
  printf("\n");

  return 0;
}
