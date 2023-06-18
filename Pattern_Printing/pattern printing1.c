//program to display pattern for 5*5 size. 

#include<stdio.h>
#include<conio.h>
int main() 
  {
     int r=5, c=5, i=0, j=0;
     
         printf("\n=====PATTERN=====\n");
         
     for ( i=1; i<=r; i++)
     {
       
        for (j =1; j<=c; j++)
        {
             printf(" * ");
        }
        
        printf("\n");
     }
     
     printf("======Thanks======");
     getch();
     return 0;
  }