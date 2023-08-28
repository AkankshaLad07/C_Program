///Program to find count of digits in inputted number.

#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0, Temp=0, Cnt=0;

    printf("\nEnter a positive number = ");
    scanf("%d",&No);

    Temp=No;

    while(Temp>0)
    {
        Temp = Temp / 10 ;
        Cnt++;
    }
    printf("\nTotal digits in %d is = %d.",No,Cnt);

    getch();
    return 0;
}


