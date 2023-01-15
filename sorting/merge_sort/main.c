#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define SIZEA(x) sizeof(x)/sizeof(x[0])
#define PRINTA(x) for(int i=0; i < SIZEA(x);i++) printf("%d ", x[i])

void merge(int *l, int *r, int *a, int sl, int sr){
  int i, j, k;
  i = j = k = 0;

  while(i < sl && j < sr){
    if(l[i] <= r[j]){
      a[k] = l[i];
      i++;
    } else {
      a[k] = r[j];
      j++;
    }

    k++;
  }

  while(i < sl){
    a[k] = l[i];
    i++; k++;
  }

  while(j < sr){
    a[k] = r[j];
    j++; k++;
  }
}

void merge_sort(int *a, int n){
  if(n < 2) return;
  int mid = floor(n/2);
  int left[mid];
  int right[n-mid];

  for(int i = 0; i < mid; i++){
    left[i]  = a[i];
  }

  for(int i = mid; i < n; i++){
    right[i-mid] = a[i];
  }
  
  merge_sort(left, mid);
  merge_sort(right, n-mid);
  merge(right,left,a,SIZEA(right),SIZEA(left));
}

int main(void){
  int n;
  scanf("%d", &n);
  int a[n];
  for(int i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }

  merge_sort(a, SIZEA(a));

  PRINTA(a);
  puts("");

  return 0;
}
