///Program to print left lower pattern using alphabets.

    #include<stdio.h>
    #include<conio.h>
    int main()
    {
        int R=0, C=0, X=0;
        char i='A';

        printf("Enter size for pattern : ");
        scanf("%d",&X);

        printf("\n==========Pattern==========\n");

        for(R=1, i='A'; R<=X; R++)
        {
            for(C=1; C<=X; C++,i++)
            {
                if(R>=C)
                {
                    printf(" %c ",i);
                }
            }
             printf("\n");
        }
         printf("\n==========Thanks==========");

         getch();
         return 0;
    }
