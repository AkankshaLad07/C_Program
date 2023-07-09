///Program to print left lower pattern using Alphabets.

    #include<stdio.h>
    #include<conio.h>
    int main()
    {
        int R=0, C=0, X=0;
        char i='\0';


         printf("Enter size for pattern : ");
        scanf("%d.",&X);

        printf("\n==========Pattern==========\n\n");

        for(R=1, i='A'; R<=5; R++)
        {
            for(C=1; C<=5; C++)
            {
                if(R>=C)
                {
                    printf(" %c ",i);
                    i++;
                }
            }
            printf("\n");
        }
        printf("\n==========Thanks==========");

        getch();
        return 0;
    }
