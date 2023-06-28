///Program to print size of int,char,float,double etc.

    #include<stdio.h>
    #include<conio.h>
    int main()
    {
        printf("\nSize of int data type is %d.",sizeof(int));
        printf("\nSize of char data type is %d.",sizeof(char));
        printf("\nSize of float data type is %d.",sizeof(float));
        printf("\nSize of doble data type is %d.",sizeof(double));
        printf("\nSize of unsigned int data type is %d.",sizeof(unsigned int));
        printf("\nSize of long long int data type is %d.",sizeof(long long int));

        getch();
        return 0;

    }
