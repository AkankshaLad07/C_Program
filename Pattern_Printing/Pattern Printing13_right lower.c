/// Display right lower pattern. 

#include<stdio.h>
#include<conio.h>
int main ()
{
      int i=0, j=0, X=0;
      printf("Enter size for pattern :");
      scanf("%d",&X);
     
      printf("\n===========Pattern============\n");
    
      for(i=1;i<=X;i++)
         
         {
          for( j=1;j<=X;j++)
             
             {
             if(i+j>=X+1)
               {
                    printf(" * ");
               }
               
             else
             {
                    printf("   ");
             }
             
             printf("\n");
          }
          
       printf("==========Thanks==========");
   
       getch();
       return 0;  
}
