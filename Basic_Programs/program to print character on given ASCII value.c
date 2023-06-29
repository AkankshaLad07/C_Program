///Program to print chracter/key on given ASCII value.

    #include<stdio.h>
    #include<conio.h>
    int main()
    {
        int i=0;
        printf("\nEnter a ASCII value(0-127) to get its corresponding character => ");
        scanf(" %d",&i);

        printf("\n----------------------------------------------");
        printf("\n Character of ASCII value 4%d is: %c",i,i);
        printf("\n----------------------------------------------");
        getch();

        return 0;
    }

