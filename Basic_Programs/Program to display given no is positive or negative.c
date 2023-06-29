///program to display the given number is positive or negative.

    #include<stdio.h>
    #include<conio.h>

    int main()
    {
        int num = 0;

        printf("\nEnter any number :");
        scanf(" %d",&num);

        if( num ==0 )
        {
            printf("\nGiven number is neutral.");
        }
        else if(num > 0)
        {
            printf("\nGiven number is positive.");
        }
        else
        {
            printf("\nGiven number is negative.");
        }

        getch();
        return 0;
    }

