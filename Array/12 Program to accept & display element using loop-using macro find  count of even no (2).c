///Create Array ,accept&display element using loop-with macro.
///Find count of even element in that array.


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
                   if(Arr[i]%2==0)
                   {
                        Cnt++;
                   }
            }

            printf("\nCount of even number in given array is : %d.",Cnt);

        getch();
        return 0;
    }
