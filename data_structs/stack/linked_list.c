#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node* link;
};

struct Node* top = NULL;

void push(int x){
  struct Node * tmp = (struct Node*)malloc(sizeof(struct Node));

  tmp->data = x;
  tmp->link = top;
  top = tmp;
}

void pop(){
  struct Node* temp;
  if(top == NULL) return;
  temp = top;
  top = top->link;
  free(temp);
}

int isEmpty(){
  if(top == NULL) return 1;
  else return 0;
}

void print(){
  struct Node *tmp = top;
  while(tmp != NULL){
    printf("%d ", tmp->data);
    tmp = tmp->link;
  }
}

int main(void){
  push(2);
  push(5);
  pop();
  print();

  return 0;
}
