///Program to print seven(7) digit in inputted number.

#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0, Dig=0, Temp=0, SDig=0;

    printf("\nEnter a positive number = ");
    scanf("%d",&No);

    Temp = No;

    while(Temp>0)
    {
        Dig = Temp % 10;
        if(Dig == 7)
        {
            SDig++;
        }
        Temp = Temp / 10;
    }
    printf("\nDigit 7 in %d is = %d",No,SDig);

    getch();
    return 0;
}


