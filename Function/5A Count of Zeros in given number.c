///Program to print count of zero(0) in inputted number.

#include<stdio.h>
#include<conio.h>
int ZCnt(int);
int main()
{
    int No=0;

    printf("\nEnter a positive number : ");
    scanf("%d",&No);

    printf("\nCont of zeros's (0) in %d is  = %d.",No,ZCnt(No));

    getch();
    return 0;
}
int ZCnt(int Num)
{
    int Temp=Num, Dig=0, ZCnt=0 ;

    while(Temp > 0)
    {
        Dig = Temp % 10;
        if(Dig == 0)
        {
            ZCnt++;
        }
        Temp = Temp/10;
    }
    return ZCnt;
}
