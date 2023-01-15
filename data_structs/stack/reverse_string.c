#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 50;

int a[50];
int top = -1;

void push(char x){
  a[++top] = x;
}

void pop(){
  top--;
}

char getTop(){
  return a[top];
}

void print(){
  while(top >= 0){
    printf("%c", getTop());
    pop();
  }
  printf("\n");
}

int main(void){
  char string[50];
  printf("Type the string: ");
  fgets(string, 48, stdin);

  int len = strlen(string)-1;

  for(int i = 0; i < len; i++)
    push(string[i]);

  print();

  return 0;
}
