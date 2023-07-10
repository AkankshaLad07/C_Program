///Create Array of 7 element,accept&display all element with loop.


    #include<stdio.h>
    #include<conio.h>
    int main()
    {
        int i=0, Arr[7];

        for(i=0 ; i<7 ; i++)
            {
                printf("\nEnter element %d =>",i+1);
                scanf("%d",&Arr[i]);
            }

        getch();
        system("cls");

        for(i=0 ; i<7 ; i++)
            {
                printf("\nValue of element %d is = %d.",i+1,Arr[i]);
            }

        getch();
        return 0;
    }
