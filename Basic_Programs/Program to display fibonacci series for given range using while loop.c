///Program to accept range and generate fibonacci series using while loop.

    #include<stdio.h>
    #include<conio.h>

    int main()
    {
        int No1=1, No2=0, No3=0, Cnt=0;

        printf("\nEnter range for fibonacci series : ");
        scanf("%d",&Cnt);

        while(Cnt>0)
        {
            printf(" %d ",No3);
            No3 = No1+No2;
            No1=No2;
            No2=No3;
            Cnt--;

        }
        getch();
        return 0;
    }

