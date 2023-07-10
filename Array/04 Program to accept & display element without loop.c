///Create Array of 7 element,accept&display all element without loop.


    #include<stdio.h>
    #include<conio.h>
    int main()
    {
        int Arr[7];

        printf("\nEnter element 1 =>");
        scanf("%d",&Arr[0]);

        printf("\nEnter element 2 =>");
        scanf("%d",&Arr[1]);

        printf("\nEnter element 3 =>");
        scanf("%d",&Arr[2]);

        printf("\nEnter element 4 =>");
        scanf("%d",&Arr[3]);

        printf("\nEnter element 5 =>");
        scanf("%d",&Arr[4]);

        printf("\nEnter element 6 =>");
        scanf("%d",&Arr[5]);

        printf("\nEnter element 7 =>");
        scanf("%d",&Arr[6]);

        getch();
        system("cls");

        printf("\nValue of element 101 is = %d.",Arr[0]);
        printf("\nValue of element 102 is = %d.",Arr[1]);
        printf("\nValue of element 103 is = %d.",Arr[2]);
        printf("\nValue of element 104 is = %d.",Arr[3]);
        printf("\nValue of element 105 is = %d.",Arr[4]);
        printf("\nValue of element 106 is = %d.",Arr[5]);
        printf("\nValue of element 107 is = %d.",Arr[6]);

        getch();
        return 0;
    }
