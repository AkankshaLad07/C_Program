///Create Array of 7 element,accept&display all element with loop.


    #include<stdio.h>
    #include<conio.h>
    int main()
    {
        int i=0, j=0, Arr[7];

        for(i=0, j=1 ; i<7 ; i++,j++)
        {
              printf("\nEnter element %d =>",j);
              scanf("%d",&Arr[i]);
        }

        getch();
        system("cls");

        for(i=0,j=101 ; i<7 ; i++,j++)
        {
            printf("\nValue of %d element is = %d.",j,Arr[i]);
        }

        getch();
        return 0;

    }
