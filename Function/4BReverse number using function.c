///Program to print reverse number for inputted number.

#include<stdio.h>
#include<conio.h>
int Rev(Num)
{
    int Dig=0, Temp=0, Rev=0;

   for(Temp = Num ; Temp > 0 ; Temp = Temp/10)
    {
        Dig=Temp % 10;
        Rev = (Rev*10) + Dig;
    }
    return Rev;
}
int main()
{

    int No=0;

    printf("\nEnter a positive number = ");
    scanf("%d",&No);

    printf("\nReverse number of %d is = %d.",No,Rev(No));

    getch();
    return 0;
}


