///program to display the given no.is even or odd.

    #include<stdio.h>
    #include<conio.h>

    int main()
    {
        int num = 0;

        printf("\nEnter any number :");
        scanf(" %d",&num);

        if( num%2 == 0)
        {
            printf("\nGiven number is even.");
        }
        else
        {
            printf("\nGiven number is odd.");
        }

        getch();
        return 0;
    }
