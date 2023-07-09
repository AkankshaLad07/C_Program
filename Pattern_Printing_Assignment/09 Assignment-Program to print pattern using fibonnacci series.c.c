///Program to print left lower pattern using fibonacci series..

    #include<stdio.h>
    #include<conio.h>
    int main()

    {
        int cnt=0, r=0, c=0, x=0, No1=1, No2=0, No3=0 ,i=0 ;

        printf("Enter size for pattern =>");
        scanf("%d",&x);

        printf("\n=============Pattern==============\n");

        for(r=1 ; r<=x ; r++)
        {
            for( c=1; c<=x ; c++)
            {
                 if(r>=c)
                 {
                        printf(" %5d ",No3);
                        No3 = No1+No2;
                        No1=No2;
                        No2=No3;
                 }
                 else
                 {
                        printf("   ");
                 }

             }
            printf("\n");
         }
         printf("\n=================================");

         getch();
         return 0;
    }
