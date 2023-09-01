///Program to show reverse string of inputted string using while loop.

#include<stdio.h>
#include<conio.h>
int main()
{
        int i=0,j=0;
        char cSrc[20]={};
        char cDest[20];

        printf("\nEnter a string : ");
        gets(cSrc);

        while(cSrc[i]!='\0')
        {
            i++;
        }

        i--;

        while(i>=0)
        {
            cDest[j]=cSrc[i];
            j++;
            i--;
        }
        cDest[j]='\0';

        printf("\nReverse of given string is  : %s",cDest);
        getch();
        return 0;
}
