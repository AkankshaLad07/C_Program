///Program to accept range and generate fibonacci series using for loop.

    #include<stdio.h>
    #include<conio.h>
    int main()
    {
        int No1=1, No2=0, No3=0, Cnt=0, i=0;

        printf("Enter range for fibonacci series : ");
        scanf("%d",&Cnt);

            for(i=1 ; i<=Cnt ; i++)
            {
                printf(" %d ",No3);
                No3 = No1+No2;
                No1=No2;
                No2=No3;
            }
        getch();
        return 0;
    }
