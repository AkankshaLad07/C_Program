///Program to concatenate entered strings.

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
        char Fname[20]="";
        char Lname[20]="";

        printf("\nEnter first name : ");
        gets(Fname);
        printf("\nEnter last name : ");
        gets(Lname);

        printf("\nFirst name entered is = %s .",Fname);
        printf("\nLast name entered is = %s .",Lname);

        strncat(Fname,Lname,3);

        getch();

        printf("\n\n\n===========================================================");
        printf("\nAfter strcat call first name entered is= %s .",Fname);
        printf("\nAfter strcat call first name entered is= %s .",Lname);

        getch();
        return 0;
}
