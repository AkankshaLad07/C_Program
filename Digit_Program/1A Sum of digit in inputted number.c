///Program to find sum of digits in inputted number.

#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0, Dig=0, Temp=0, DSum=0;

    printf("\nEnter a positive number = ");
    scanf("%d",&No);

    Temp=No;

    while(Temp>0)
    {
        Dig = Temp % 10 ;
        DSum = DSum + Dig ;
        Temp = Temp / 10 ;
    }
    printf("\nDigits sum of %d is = %d ",No,DSum);

    getch();
    return 0;
}


