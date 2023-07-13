    #include<stdio.h>
    #include<conio.h>
    int main()
    {
        int Num[5] = { 66, 34, 28, 57, 91 };

        printf("\n Value of 1st elemant : %d",Num[0]);
        printf("\n Value of 2nd elemant : %d",Num[1]);
        printf("\n Value of 3rd elemant : %d",Num[2]);
        printf("\n Value of 4th elemant : %d",Num[3]);
        printf("\n Value of 5th elemant : %d",Num[4]);

        getch();

            Num[4] = 45;

            Num[2] = Num[1];

            Num[0]++;

            Num[3] +=20;

        printf("\n============================\n");

        printf("\n Value of 101 = %d",Num[0]);
        printf("\n Value of 201 = %d",Num[1]);
        printf("\n Value of 301 = %d",Num[2]);
        printf("\n Value of 401 = %d",Num[3]);
        printf("\n Value of 501 = %d",Num[4]);

        printf("\n\n Press any to continue.....");

        getch();
        return 0;
    }
