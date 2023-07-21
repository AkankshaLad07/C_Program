#include<stdio.h>
#include<conio.h>
int main() 
{
   int i=0,no=0,s=0, e=0;
  
   printf("\nTable starts from:");
   scanf("%d",&s);
   printf("\nTable upto:");
   scanf("%d",&e);
   printf("=================================\n"); 
    
    for(no=1;no<=10;no++) 
    {
      for(i=s;i>=e;i--)
      {
         printf(" %4d\t",no*i);     
      } 
    printf("\n");
    }
    
  printf("==============================\n");
  getch();
  return 0;
 }