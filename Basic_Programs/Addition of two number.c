//Program go print addition of two numbers. 

#include <stdio.h>
#include<conio.h>

int main()
{
  int n1, n2, Add;
  
  printf("\nEnter number 1st:");
  scanf("%d",&n1);
  printf("\nEnter number 2nd:");
  scanf("%d",&n2);
  Add=n1+n2;
  printf("\nAddition is %d.",Add);
  
  getch();
  return 0;
}