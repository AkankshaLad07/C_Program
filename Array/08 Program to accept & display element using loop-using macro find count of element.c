///Create Array ,accept&display element using loop-with macro.
///Find count of given element in that array.

    #include<stdio.h>
    #include<conio.h>
    #define size 5
    int main()
    {
        int i=0, Srh=0 , Arr[size], Cnt=0;

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
                        Cnt++;
                   }
            }

            if(Cnt==0)
            {
                printf("\nEntered element not found in given array.");
            }
            else
            {
                 printf("\nCount of entered element %d is %d times.",Srh,Cnt);

            }

        getch();
        return 0;
    }
