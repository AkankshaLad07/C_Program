//Program for factorial of any number. 

#include<stdio.h>
#include<conio.h>
int main()
{
  int Num=0 , temp=0, Fact=1;
  
  printf("\nEnter a positive number : ");
  scanf("%d",&Num);
  
  temp=Num;
  
  while(temp>0)
  {
    Fact=Fact*temp;
    temp--;
  }
  printf(" \n\n\t%d! = %d",Num,Fact);
  getch();
  return 0;
}