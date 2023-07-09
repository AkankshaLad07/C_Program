/// Program to print left lower pattern using table of 7.

    #include<stdio.h>
    #include<conio.h>
    int main()
    {
        int c=0, r=0, x=0 ,i=0 ;

        printf("\nEnter size for pattern => ");
        scanf("%d",&x);

        printf("\n=============pattern==============\n\n");

        for( r=1 , i=7; r<=x ; r++)
        {
            for( c=1 ; c<=x ; c++)
            {
                if( r>=c || r==c)
                {
                    printf(" %3d ",i);
                    i = i+7;
                }
            }
            printf("\n");
        }
        printf("\n=============Thanks===============");
        getch();
        return 0;
    }
