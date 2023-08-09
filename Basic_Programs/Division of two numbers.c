//Program to print division of two numbers. 

#include <stdio.h>
#include<conio.h>

int main()
{
  int n1=0, n2=0;
  float Div=0.0;
  
  printf("\nEnter number 1st:");
  scanf("%d",&n1);
  printf("\nEnter number 2nd:");
  scanf("%d",&n2);
  Div=(float)n1/n2;
  printf("\nDivision is %0.2f",Div);
  
  getch();
  return 0;
}