///Program to concatenate two strings.

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
        char Fname[20]="";
        char Lname[20]="";
        char Name[40]="";

        printf("\nEnter first name : ");
        gets(Fname);
        printf("\nEnter last name : ");
        gets(Lname);

        getch();

        strcat(strcat(strcat(Name,Fname)," "),Lname);


        printf("\nFname generated is = %s .",Fname);
        printf("\nLname generated is = %s .",Lname);
        printf("\n\nFull name generated is = %s .",Name);

        getch();
        return 0;
}
