///Program to display table of given number. 

#include<stdio.h>
#include<conio.h>
int main()
{
  int No=0, i=0;
  printf("\nEnter any number :");
  scanf("%d",&No);
  
  printf("\n=Table of %d=",No);
     i=1;
     while(i<=10)
    {
      printf("\n\t\t\t %d ",No*i);
      i++;
    }
    
   printf("\n============");
  getch();
  return 0;
};
  return 0;
}