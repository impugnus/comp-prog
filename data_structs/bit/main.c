#include <stdio.h>
#include <stdlib.h>

#define MAXN 10010

int bit[MAXN];
int n;

void updt(int x, int v){
  for(; x <= n; x+=(x&-x)) bit[x]+=v;
}

int soma(int x){
  int ans = 0;

  for(; x > 0; x -= (x&-x)) ans+=bit[x];

  return ans;
}


int main(void){

  int a[] = {0, 3, 6, 12, 1, 4, 8, 6, 4, 3, 0, 9};
  int sa = sizeof(a)/sizeof(a[0]);

  n = sa;

  for(int i = 1; i <= sa; i++) updt(i, a[i]);

  printf("%d\n", soma(3));

  return 0;
}
