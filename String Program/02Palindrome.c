///program to find given word is palindrome or not using for loop.

#include<stdio.h>
#include<conio.h>
int main()
{
        int i=0, j=0 ;
        char cSrc[20]={'\0'};


        printf("\nEnter a string : ");
        gets(cSrc);

        for(i=0 ; cSrc[i] != '\0' ; i++);

        i--;

        for( ; i >= 0 ; i--,j++ )
        {
                if(cSrc[i] != cSrc[j])
                {
                        break;
                }
        }

        if(i<j)
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
