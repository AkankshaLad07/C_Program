///Create Array ,accept&display element using loop-with macro.
///Find count of even,odd & zero elements in that array.


    #include<stdio.h>
    #include<conio.h>
    #define size 5

    int main()
    {
        int i=0, E_Cnt=0, O_Cnt=0, Z_Cnt=0, Arr[size];

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
                        Z_Cnt++;
                   }
                   else if(Arr[i]%2==0)
                   {
                       E_Cnt++;
                   }
                   else
                   {
                       O_Cnt++;
                   }
            }

            printf("\nCount of zeros in given array is : %d.",Z_Cnt);
            printf("\nCount of even number in given array is : %d.",E_Cnt);
            printf("\nCount of odd number in given array is : %d.",O_Cnt);

        getch();
        return 0;
    }
