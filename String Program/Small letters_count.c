///Program to count small letters in given string.

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
            if(cSrc[i]>='a' && cSrc[i]<= 'z')
            {
                cnt++;
            }
            i++;
        }
        printf("\nSmall letters in given string is : %d.",cnt);
        getch();
        return 0;
}
