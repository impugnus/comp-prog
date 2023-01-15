#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node* link;
};

struct Node* front = NULL;
struct Node* rear = NULL;

int isEmpty(){
  if(front == rear) return 1;
  else return 0;
}

void enqueue(int x){
  struct Node* tmp = (struct Node*)malloc(sizeof(struct Node*));
  tmp->data = x;
  tmp->link = NULL;
  
  if(front == NULL && rear == NULL){
    front = rear = tmp;
    return;
  }

  rear->link = tmp;
  rear = tmp;
}

void dequeue(){
  struct Node* tmp = front;
  if(front == NULL) return;
  if(front == rear) front = rear = NULL;
  else front = front->link;

  free(tmp);
}

void print(){
  struct Node* tmp = front;

  while(tmp != NULL){
    printf("%d ", tmp->data);
    tmp = tmp->link;
  }
  printf("\n");
}

int main(void){

  enqueue(2);
  enqueue(3);

  print();

  dequeue();
  print();

  return 0;
}
