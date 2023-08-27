///Program to print minimum digit in inputted number using function.

#include<stdio.h>
#include<conio.h>
int min(int);

int main()
{
    int No=0,Result=0;

    printf("\nEnter a positive number = ");
    scanf("%d",&No);
    Result = min(No);


    printf("\nMinimum digit in %d is = %d",No,Result);

    getch();
    return 0;
}
int min(int Num)
{
    int Dig=0, Temp=0, Min=0;
    Temp = Num;
    Min = Temp % 10;

    while(Temp>0)
    {
        Dig = Temp % 10;
        if(Min>Dig)
        {
            Min=Dig;
        }
        Temp = Temp / 10;
    }
    return Min;
}


