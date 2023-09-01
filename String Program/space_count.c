///Program to count empty spaces in given string.

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
        char cSrc[20]={'\0'};
        int i=0,cnt=0;
        printf("\nEnter a string : ");
        gets(cSrc);

        while(cSrc[i]!='\0')
        {
            if(cSrc[i]== ' ')
            {
                cnt++;
            }
            i++;
        }
        printf("\nEmpty spaces in given string is : %d",cnt);
        getch();
        return 0;
}
