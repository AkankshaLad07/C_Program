///Program to display table from 7 to 12.

#include<stdio.h>
#include<conio.h>
int main()
{
  int i=0;
  printf("\n=====Table from 7 to 12=====\n");
  for(i=1;i<=10;i++)
  {
    printf("\n");
    printf(" %3d ",i*7);
    printf(" %3d ",i*8);
    printf(" %3d ",i*9);
    printf(" %3d ",i*10);
    printf(" %3d ",i*11);
    printf(" %3d ",i*12);
  }
  getch();
  return 0;
}
