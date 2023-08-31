///Program to concatenate entered strings.

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
        char Fname[20]="";
        char Mname[20]="";
        char Lname[20]="";
        char Name[60]="";

        printf("\nEnter first name : ");
        gets(Fname);
        printf("\nEnter middle name : ");
        gets(Mname);
        printf("\nEnter last name : ");
        gets(Lname);

        getch();

        strcat(Name,Fname);
        strcat(Name," ");
        strcat(Name,Mname);
        strcat(Name," ");
        strcat(Name,Lname);

        printf("\nFname generated is = %s .",Fname);
        printf("\nMname generated is = %s .",Mname);
        printf("\nLname generated is = %s .",Lname);
        printf("\n\nFull name generated is = %s .",Name);

        getch();
        return 0;
}
