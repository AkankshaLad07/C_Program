//Program to print substraction of two numbers. 

#include<stdio.h>
#include<conio.h>

int main()
{
  int n1=0, n2=0, sub=0;
  
  printf("\nEnter number 1st:");
  scanf("%d",&n1);
  printf("\nEnter number 2nd:");
  scanf("%d",&n2);
  sub=n1-n2;
  printf("\nSubstraction is %d.",sub);
  
  getch();
  return 0;
}