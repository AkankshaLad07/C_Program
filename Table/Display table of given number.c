///Program to display table of given number. 

#include<stdio.h>
#include<conio.h>
int main()
{
  int No=0, i=1;
  printf("\nEnter any number :");
  scanf("%d",&No);
  
  printf("\nThe table of %d ",No);
  printf("\n==========");
  
     while(i<=10)
    {
      printf("\n\t %d ",No*i);
      i++;
    }
    
   printf("\n=========");
  getch();
  return 0;
}