///Program to print Zero's (0) in inputted number.

#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0, Dig=0, Temp=0, ZCnt=0;

    printf("\nEnter a positive number = ");
    scanf("%d",&No);

    Temp=No;

    while(Temp>0)
    {
        Dig = Temp % 10;
        if(Dig == 0)
        {
            ZCnt++;
        }
        Temp = Temp / 10;
    }
    printf("\nCount of zero's(0) in %d is = %d.",No,ZCnt);

    getch();
    return 0;
}


