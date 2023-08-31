///program to find given word is palindrome or not using two strings.

#include<stdio.h>
#include<conio.h>
int main()
{
        int i=0, j=0;
        char cSrc[20]={'\0'};
        char cDest[20]={'\0'};

        printf("\nEnter a string : ");
        gets(cSrc);

        while(cSrc[i] != '\0')
        {
            i++;
        }

        i--;

        while(i >= 0)
        {
                cDest[i]=cSrc[i];
                i--;
                j++;
        }
        cDest[i]='\0';

        for(i=0 ; i<j ; i++)
        {
            if(cSrc[i] != cDest[j])
            {
                break;
            }
        }

        if(i==j)
        {
            printf("\nGiven string is palindrome.");
        }
        else
        {
            printf("\nGiven string is not palindrome.");
        }

        getch();
        return 0;
}

