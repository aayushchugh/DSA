#include <stdio.h>
#include<stdbool.h>
#define MAX 4


int stack_arr[MAX];
int top = -1;

bool IsEmpty(){
return top == MAX -1;
}
void push(int data)
{
  if(IsEmpty()){
  printf("stack overflowed");
  return;
}

top++;
stack_arr[top] = data;

}
void printArr(){
  for(int i=0;i<MAX;i++)
  printf("%d",stack_arr[i]);
}
int main(){
  push(12);
  push(8);
  push(9);
  push(4);
  push(34);
  push(2);
  
  printArr();
  return 0;

  }

