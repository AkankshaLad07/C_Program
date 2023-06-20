///Program to print N Character. 
  
  
  #include<stdio.h>
  #include<conio.h>
  int main()
  {
       
       int i=0,j=0,x=0;
       
       printf("\nEnter size for pattern:");
       scanf("%d",&x);
 
       printf("\n==========PATTERN==========\n\n");
  
       for(i=1;i<=x;i++)
       {
           for(j=1;j<=x;j++)
           {
                 if(j==1||j==x||i==j)
                 {
                     printf(" * ");
                 }
                 else
                 {
                     printf("   ");
                 }      
           }
            
            printf("\n");
        }
        printf("\n===========Thanks=========");
        getch();
        return 0;
    }
