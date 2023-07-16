///Program to print hollow pattern using alphabets.

    #include<stdio.h>
    #include<conio.h>
    int main()
    {
        int R=0, C=0, X=0;
        char i='\0';

        printf("Enter size for Pattern : ");
        scanf("%d",&X);

        printf("\n=========Pattern=========\n\n");

        for(R=1; R<=X; R++)
        {
                for(C=1,i='A'; C<=X; C++,i++)
                {
                        if(R==1 || R==X || C==1 || C==X)
                        {
                            printf(" %c ",i);
                        }
                        else
                        {
                            printf("   ");
                        }
                }
            printf("\n");
        }
        printf("\n=========Thanks=========");

        getch();
        return 0;
    }
