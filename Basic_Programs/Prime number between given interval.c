#include<stdio.h>
#include<conio.h>

int main() {
   int low, high, i, flag;
   printf("Enter two numbers(intervals): ");
   scanf("%d %d", &low, &high);
   printf("Prime numbers between %d and %d are: ", low, high);

   while (low < high) //1   50
   {    
      flag = 0;

      if (low <= 1) 
      {
         ++low;
         continue;
      }
 
      for (i = 2; i <= low / 2; ++i) //2 3 4
      {
         if (low % i == 0) 
         {
            flag = 1;
            break;
         }
      }

      if (flag == 0)
         printf("%d ", low);

      low++;
   }

   return 0;
}