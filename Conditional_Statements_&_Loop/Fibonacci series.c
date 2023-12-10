//Program for fibonacci series. 

 #include <stdio.h>
 #include <conio.h>
 int main() 
 {
   int n1=1, n2=0, n3=0,size=0;
   
   printf("Enter positive number for series: ");
   scanf("%d",&size);
   
   while(size>0)
   {
     printf("\t%d",n3);
     n3=n1+n2;
     n1=n2;
     n2=n3;
     size--;
   }
   getch();
   return 0;
 }
  