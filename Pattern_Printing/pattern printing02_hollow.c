//Program to display hollow pattern of given size. 

  #include<stdio.h>
  #include<conio.h>
  int main()
  {
    
    int i=0, j=0, r=0, c=0;
  
     printf("Enter Rows :");
     scanf(" %d",&r);
     
     printf("Enter Columns :");
     scanf(" %d",&c);
     
     printf("=========PATTERN=========\n\n");
  
     for(i=1;i<=r;i++)
     {
    
         for(j=1;j<=c;j++)
         {
        
             if(i==1||i==r||j==1||j==c)
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
  
     printf("\n==========Thanks=========");
     getch();
     return;
   }