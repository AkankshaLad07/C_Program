///Create Array ,accept&display element using loop-with macro.
///Find count of zeros in that array.


    #include<stdio.h>
    #include<conio.h>
    #define size 5

    int main()
    {
        int i=0, Cnt=0, Arr[size];

            for(i=0 ; i<size ; i++)
            {
                  printf("\nEnter element %d =>",i+1);
                  scanf("%d",&Arr[i]);
            }

        getch();
        system("cls");


            for(i=0 ; i<size ; i++)
            {
                   if(Arr[i]==0)
                   {
                        Cnt++;
                   }
            }

            printf("\nCount of zero in given array is : %d.",Cnt);

        getch();
        return 0;
    }
