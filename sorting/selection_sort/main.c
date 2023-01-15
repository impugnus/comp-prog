#include <stdio.h>
#include <stdlib.h>

void print_array(int a[], int size){
  for(int i = 0; i < size; i++){
    printf("%d ", a[i]);
  }
  printf("\n");
}

int main(void){
  int a[] = {2, 7, 4, 1, 5, 3};

  int sun = sizeof(a)/sizeof(a[0]);

  print_array(a, sun);

  for(int i = 0; i < sun-1; i++){
    int min_idx = i;
    for(int j = i+1; j < sun; j++){
      if(a[j] < a[min_idx])
        min_idx = j;
    }

    int temp = a[i];
    a[i] = a[min_idx];
    a[min_idx] = temp;
  }

  print_array(a, sun);

  return 0;
}
