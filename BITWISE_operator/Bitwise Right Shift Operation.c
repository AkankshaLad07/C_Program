///Program to display bitwise >> (right shift) operation.

#include<stdio.h>
#include<conio.h>
int main()
{
    int No1=0 , Res=0;

    printf("\nEnter 1st number = ");
    scanf("%d",&No1);

    Res = No1 >> 5;

    printf("\n Result of %d = %d",No1,Res);
    getch();
    return 0;
}
