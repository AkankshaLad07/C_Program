///Program to find sum of digits in inputted number using function.

#include<stdio.h>
#include<conio.h>
int Sum(int);
int main()
{
    int No ;

    printf("\nEnter a positive number : ");
    scanf("%d",&No);

    printf("\nDigits sum of %d is = %d ",No,Sum(No));

    getch();
    return 0;
}
int Sum(int Num)
{
    int Temp=0 , DSum=0;

    for(Temp=Num ; Temp>0 ; Temp=Temp/10)
    {
        DSum=DSum+(Temp%10);
    }
    return DSum;
}
