#include <stdio.h>
#include <stdlib.h>

#define N 4
#define NULL_CHR '\0';
#define SUCCESS 1

typedef struct {
  char v[N];
  int top;
} STACK;

void push(STACK *S, char x){
  //stack is full?
  if (S -> top >= N){
    printf("Full stack \n");
  } else {
    //not full, can insert x
    S -> v[S -> top] = x;
    S -> top++;
  }
}

char pop(STACK *S){
  //stak is empty?
  if (S -> top == 0){
    printf("Empty stack \n");
    return NULL_CHR;
  } else {

  //return last element (Last input - First output)
    S -> top--;  
    return S -> v[S ->top];
  }
}

int main(void) {

  STACK *S = (STACK *) malloc(sizeof(STACK));
  S -> top = 0;

  push(S, 'A');
  push(S, 'B');
  push(S, 'C');
  push(S, 'D');
  push(S, 'E'); //Full stack

  printf("%c \n", pop(S));
  printf("%c \n", pop(S));
  printf("%c \n", pop(S));
  printf("%c \n", pop(S));
  printf("%c \n", pop(S)); //Empty stack
  
  return SUCCESS;
}