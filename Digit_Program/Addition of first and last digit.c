//Program to add first and last digit of entered number. 

 #include <stdio.h> 
 #include<math.h>
 #include<conio.h>
  int main() 
  {
    int num=0, lastdig=0, firstdig=0, dig=0, sum=0;
    
    printf("\nEnter any positive number :");
    scanf("%d",&num);
    
    lastdig= num%10;
    dig=log10(num);
    firstdig=(num/(pow(10,dig)));
    
    sum=firstdig+lastdig;
    
    printf("\nOriginal number : %d",num);
    printf("\nAddition of first and last digit of %d is : %d",num,sum);
    getch();
  }