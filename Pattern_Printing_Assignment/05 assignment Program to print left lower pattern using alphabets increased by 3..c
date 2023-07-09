/// Program to print left lower pattern using alphabets increased by 3.

    #include<stdio.h>
    #include<conio.h>

    int main()
    {
        int c=0, r=0, x=0;
        char i='\0';

        printf("Enter size for pattern => ");
        scanf("%d",&x);

        printf("\n===========pattern============\n\n");

            for( r=1,i='A'; r<=x ; r++)
            {
                for(c=1 ; c<=x ; c++)
                {
                    if( r==c || r>=c )
                    {

                        printf(" %c ",i);
                         i=i+3;

                           if(i>'Z')
                           {
                               i='A'+(i-'Z')-1;
                           }
                    }
                    else
                    {
                        printf("   ");
                    }

                }
                printf("\n");
            }
        printf("\n============Thanks===========");

        getch();
        return 0;
    }
