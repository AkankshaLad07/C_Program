///Program to print maximum digit in inputted number.

#include<stdio.h>
#include<conio.h>
int max(int);
int main()
{
    int No=0;

    printf("\nEnter a positive number = ");
    scanf("%d",&No);

    printf("\nMaximum digit in %d is = %d.",No,max(No));

    getch();
    return 0;
}
int max(int Num)
{
    int Dig=0, Temp=0, Max=0;

    Temp = Num;

    while(Temp>0)
    {
        Dig = Temp % 10;

        if(Max<Dig)
        {
            Max=Dig;
        }
        Temp = Temp / 10;
    }
    return Max;
}

