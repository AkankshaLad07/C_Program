 #include <stdio.h>
 #include <conio.h>
 int main() 
 {
   int No1=0 , No2=0;
   
   printf("\nEnter 1st number : ");
   scanf("%d",&No1);
   printf("\nEnter 2nd number : ");
   scanf("%d",&No2);
   
   printf("\nValues before swap : \nNo1 = %d\nNo2 = %d",No1,No2);
   
   No2 = No1+No2;
   No1 = No2-No1;
   No2 = No2-No1;
   
   printf("\nValues after swapping :\nNo1 = %d\nNo2 = %d",No1,No2);
   getch();
   return 0;
 }