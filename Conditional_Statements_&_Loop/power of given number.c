//Program for power of any number. 

 #include <stdio.h>
 #include <conio.h>
 int main() 
 {
   int num=0,expo=0,pow=1,i=0;
   printf("\nEnter any number : ");
   scanf("%d",&num);
   
   printf("\nEnter exponent : ");
   scanf("%d",&expo);
   
   for(i=1;i<=expo;i++)
   {
     pow=pow*num;
   }
   printf("%d^%d=%d",num,expo,pow);
   getch();
   return 0;
 }