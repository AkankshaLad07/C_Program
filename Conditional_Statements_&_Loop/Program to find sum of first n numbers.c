///Program to print sum of first n numbers.

    #include<stdio.h>
    #include<conio.h>

    int main()
    {
        int i=0, num=0, sum=0 ;

        printf("Enter number for sum : ");
        scanf("%d",&num);
        i=1 ;
        while(i<=num)
        {
            sum=sum+i;
            i++;
        }
        printf("\n Sum of first %d number is : %d",num,sum);

        getch();
        return 0;
    }
