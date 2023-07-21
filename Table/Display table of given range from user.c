#include<stdio.h>
#include<conio.h>
int main() 
{
  int i=0,no=0,s=0, e=0;
   
  printf("\nTable starts from:");
  scanf("%d",&s);
  
  printf("\nTable upto:");
  scanf("%d",&e);
  
  for(i=1;i<=10;i++) 
  {
      for(no=s;no<=e;no++) 
      {
         printf("  %4d ",no*i);
      }    
      printf("\n");
  }
  getch();
  return 0;
}