///Program to swap first and last digit. 

 #include <stdio.h>
 #include <conio.h>
 #include<math.h>
  int main() 
  {
    int num=0 , lastdig=0, firstdig=0, dig=0;
    float swapnum=0;
    printf("\nEnter any positive number :");
    scanf("%d",&num);
    
    lastdig= num%10;
    dig=log10(num);
    firstdig=(num/(pow(10,dig)));
    
    swapnum=lastdig;
    swapnum=swapnum*(pow(10,dig));
    swapnum=swapnum+(num%(int)(pow(10,dig)));
    swapnum=swapnum-lastdig;
    swapnum=swapnum+firstdig;
    
    printf("\nOriginal number : %d.",num);
    printf("\nAfter swapping first and last digit of %d is : %0.0f.",num,swapnum);
    
  }