///Program to convert uppercase string into lowercase.

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
        char cSrc[20]="";
        int i=0;
        printf("\nEnter a string : ");
        gets(cSrc);

        while(cSrc[i]!='\0')
        {
            if(cSrc[i]>='A'||cSrc[i]<='Z')
            {
                cSrc[i]=cSrc[i]+32;
            }
            i++;
        }
        printf("\nGiven string is after capitalization : %s",cSrc);
        getch();
        return 0;
}
