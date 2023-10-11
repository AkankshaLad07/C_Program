///Program to check given year is leap year or not.

#include<stdio.h>
#include<conio.h>
int main()
{
    int year=0 ;

    printf("\nEnter a year : ");
    scanf("%d",&year);

    if( year % 4 == 0)
    {
        printf("\n %d is leap year.",year);
    }
    else
    {
        printf("\n\n%d is not leap year.",year);
    }
    getch();
    return 0;
}

