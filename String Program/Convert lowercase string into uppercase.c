///Program to Lowercase string into uppercase.

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
            if(cSrc[i]>='a'||cSrc[i]<='z')
            {
                cSrc[i]=cSrc[i]-32;
            }
            i++;
        }
        printf("\nGiven string is after capitalization : %s",cSrc);
        getch();
        return 0;
}
