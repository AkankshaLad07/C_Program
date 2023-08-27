///Program to print reverse number for inputted number.

#include<stdio.h>
#include<conio.h>
int Rev(int);
int main()
{
    int No=0;

    printf("\nEnter a positive number = ");
    scanf("%d",&No);

    printf("\nReverse number of %d is = %d.",No,Rev(No));

    getch();
    return 0;
}
int Rev(Num)
{
    int Dig=0, Temp=0, Rev=0;
    Temp = Num;

    while(Temp > 0)
    {
        Dig = Temp % 10;
        Rev = (Rev*10) + Dig ;
        Temp = Temp / 10;
    }
    return Rev;
}
