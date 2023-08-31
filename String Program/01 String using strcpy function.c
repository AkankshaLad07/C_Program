///String using strcpy() function.

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char Name[15]="Unknown";
    char FName[15]="Jack Fruit";

    printf("\nName string value :%s",Name);
    printf("\nName string value :%s",FName);
    getch();

    strcpy(Name,"Harry Potter");
    printf("\nNew name string value : %s.",Name);
    strcpy(Name,"FName");
    printf("\nUpdated name string value : %s.",Name);

    getch();
    return 0;
}


