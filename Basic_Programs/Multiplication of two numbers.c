//Program to print multiplication of two numbers. 

#include <stdio.h>
#include<conio.h>

int main()
{
  int n1=0, n2=0, Mul=0;
  
  printf("\nEnter number 1st:");
  scanf("%d",&n1);
  printf("\nEnter number 2nd:");
  scanf("%d",&n2);
  Mul=n1*n2;
  printf("\nMultiplication is %d.",Mul);
  
  getch();
  return 0;
}