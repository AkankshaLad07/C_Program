///Program to concatenate two strings.

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
        char Fname[20]="";
        char Lname[20]="";
        char Name[20]="";

        printf("\nEnter first name : ");
        gets(Fname);
        printf("\nEnter last name : ");
        gets(Lname);

        strcat(Fname,Lname);

        printf("\nFname generated is = %s .",Fname);

        getch();
        return 0;
}
