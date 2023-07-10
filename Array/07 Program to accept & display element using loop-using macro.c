///Create Array ,accept&display element using loop-with macro.
///Search given element in that array&return its location.


    #include<stdio.h>
    #include<conio.h>
    #define size 5
    int main()
    {
        int i=0, Srh=0 , Arr[size];

            for(i=0 ; i<size ; i++)
            {
                  printf("\nEnter element %d =>",i+1);
                  scanf("%d",&Arr[i]);
            }

        getch();
        system("cls");

        printf("\nEnter element to be searched : ");
        scanf("%d",&Srh);

            for(i=0 ; i<size ; i++)
            {
                   if(Srh==Arr[i])
                   {
                        break;
                   }
            }

        if(i==size)
            {
                printf("\nEntered element not found in given array.");
            }
        else
            {
                 printf("\nEntered element found at location => %d",i+1);
            }

        getch();
        return 0;
    }
