///Create Array ,accept&display element using loop-with macro.
///Find maximum & minimum element in that array.


    #include<stdio.h>
    #include<conio.h>
    #define size 5

    int main()
    {
        int i=0, Max=0, Min=0 , Arr[size];

            for(i=0 ; i<size ; i++)
            {
                  printf("\nEnter element %d =>",i+1);
                  scanf("%d",&Arr[i]);
            }

        getch();
        system("cls");

            for(i=0 ; i<size ; i++)
                {
                       if(Arr[i]>Max || i==0)
                       {
                            Max=Arr[i];
                       }

                       if(Arr[i]<Min || i==0)
                       {
                            Min=Arr[i];
                       }
                }

             printf("\nMaximum number in given array is : %d.",Max);

             printf("\nMinimum number in given array is : %d.",Min);

        getch();
        return 0;
    }
