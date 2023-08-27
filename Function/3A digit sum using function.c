///Program to find sum of digits in inputted number using function.

#include<stdio.h>
#include<conio.h>
int Sum(int);
int main()
{
    int No=0;

    printf("\nEnter a positive number = ");
    scanf("%d",&No);

    printf("\nDigits sum of %d is = %d ",No,Sum(No));

    getch();
    return 0;
}
int Sum(int Num)
{
    int Dig=0, Temp=0, DSum=0;
    Temp=Num;

    while(Temp>0)
    {
        Dig = Temp % 10 ;
        DSum = DSum + Dig ;
        Temp = Temp / 10 ;
    }
    return DSum;
}

