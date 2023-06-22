///Display pattern for left lower. 

   #include<stdio.h>
   #include<conio.h>
   int main()   
   {
       int i=0, j=0, x=0;
       
       printf("\n Enter size for pattern :");
       scanf("%d",&x);
       
       printf("\n=========Pattern========\n\n");
       
       for(i=1;i<=x;i++)        
          {
              for(j=1;j<=x;j++)              
              {                
                  if(i==j||i>=j)
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
         
      printf("\n==========Thanks==========");
      
      getch();
      return 0;
   }