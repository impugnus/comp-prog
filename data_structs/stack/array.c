#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define ARRAY_SIZE 20

int a[ARRAY_SIZE];
int top = -1;

void alert(char* msg){
  fprintf(stderr, "ERROR: %s\n", msg);
  exit(1);
}

void push(int x){
  if(top == ARRAY_SIZE - 1) alert("stack overflow");
    
  a[++top] = x;
}

void pop(){
  if(top == -1) alert("No element to pop");
  top--;
}

bool isEmpty(){
  if(top == -1) return true;
  else return false;
}

int getTop(){
  return a[top];
}

void printStack(){
  printf("Stack: ");
  for(int i = top; i >= 0; i--){
    printf("%d ", a[i]);
  }
  printf("\n");
}

int main(void){
  push(10); printStack();
  push(2); printStack();

  pop(); printStack();

  return 0;
}
