#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 50

int a[MAX_SIZE];
int front = -1;
int rear = -1;

int is_empty(){
  return (front == -1 && rear == -1);
}

int is_full(){
  return (rear+1)%MAX_SIZE == front ? 1 : 0;
}

void enqueue(int data){
  if(is_full()){
    puts("Queue is full");
    return;
  } else if (is_empty()) front = rear = 0;
  else rear = (rear+1) % MAX_SIZE;

  a[rear] = data;
}

void dequeue(){
  if(is_empty()){
    puts("Stack is empty");
    return;
  } else if (front == rear) rear = front = -1;
  else front = (front+1) % MAX_SIZE;
}

int top(){
  if(front == -1) return -1;

  return a[front];
}

void print(){
  int count = (rear+MAX_SIZE-front)%MAX_SIZE+1;
  for(int i = 0; i < count; i++){
    int idx = (front+i)%MAX_SIZE;
    printf("%d ", a[idx]);
  }

  printf("\n");
}

int main(void){
  enqueue(1);
  enqueue(20);
  enqueue(30);
  enqueue(60);
  enqueue(2);
  enqueue(4);
  print();

  dequeue();
  dequeue();
  print();
  printf("%d\n", top());
}

