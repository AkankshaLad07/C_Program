///Program to print ASCII value of entered chracter/key.

    #include<stdio.h>
    #include<conio.h>
    int main()
    {
        char i='\0';
        printf("\nEnter a character/key to get its ASCII value => ");
        scanf(" %c",&i);

        printf("\n------------------------------------");
        printf("\n ASCII value of %c is: %d",i,i);
        printf("\n------------------------------------");
        getch();

        return 0;
    }
