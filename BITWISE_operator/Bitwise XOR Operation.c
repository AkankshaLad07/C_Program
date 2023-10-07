///Program to display bitwise ^ (Xor) operation.

#include<stdio.h>
#include<conio.h>
int main()
{
    int No1=0, No2=0, Res=0;

    printf("\nEnter 1st number = ");
    scanf("%d",&No1);
    printf("\nEnter 2nd number = ");
    scanf("%d",&No2);

    Res = No1 ^ No2;

    printf("\n\nResult of %d ^ %d = %d",No1,No2,Res);
    getch();
    return 0;
}
