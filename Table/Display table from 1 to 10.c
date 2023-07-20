///Program to display table from 1 to 10.

#include<stdio.h>
#include<conio.h>
int main() 
{
  int i=0, no=0;
  printf("\n\t===============Table from 1 to 10===============\n");
  
  for(i=1;i<=10;i++)
  {
     for(no=1;no<=10;no++)
     {
         printf(" %3d ",no*i);
     }
    printf("\n");
 }
  printf("\t=================================================\n");
  getch();
  return 0;
}