#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a[50];
int top = -1;

void push(char c){
  a[++top] = c;
}

void pop(){
  top--;
}

char getTop(){
  return a[top];
}

char getRev(char c){
  switch(c){
    case ')':
       return '(';
       break;
    case ']':
       return '[';
       break;
    case '}':
       return '{';
       break;
    default: return 0x0;
  }
}


int main(void){
  int valid = 1;

  char string[50];
  printf("Type the string: ");
  fgets(string, 48, stdin);

  for(int i = 0; i < strlen(string); i++){
    if(string[i] == '(' || string[i] == '[' || string [i] == '{')
      push(string[i]);
    else if(string[i] == ')' || string[i] == ']' || string[i] == '}'){
      char n = getTop();
      if(n != getRev(string[i])){
        valid = 0;
        break;
      } else pop();
    }
  }

  (valid) ? printf("YES\n") : printf("NO\n");

  return 0;
}
