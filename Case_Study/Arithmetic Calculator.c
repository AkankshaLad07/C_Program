#include<stdio.h>
#include<conio.h>
#include"Helper Function/Function_Add.c";
#include"Helper Function/Function_Sub.c";
#include"Helper Function/Function_Mul.c";
#include"Helper Function/Function_Div.c";
#include"Helper Function/Function_Modulo.c";

int main()
{
    int Choice=0;
    char ch='\0';

    for(;;)
    {
            printf("\n*************************** FORK INFOSYSTEM ***************************\n\t\t\tArithmetic Calculator");
            printf("\n-----------------------------------------------------------------------");
            printf("\nChoice =>\n\t1.Addition\n\t2.Substraction\n\t3.Multiplication\n\t4.Division\n\t5.Reminder\n\t6.Exit");
            printf("\n-----------------------------------------------------------------------");

            printf("\nEnter your choice : ");
            scanf("%d",&Choice);

            switch(Choice)
            {
            case 1:
                    Add();
                    getch();
                    system("cls");
                    break;
            case 2:
                    Sub();
                    getch();
                    system("cls");
                    break;
            case 3:
                    Mul();
                    getch();
                    system("cls");
                    break;
            case 4:
                    Div();
                    getch();
                    system("cls");
                    break;
            case 5:
                    Mod();
                    getch();
                    system("cls");
                    break;
            case 6:
                    fflush(stdin);
                    printf("\nAre you sure do you want to exit???");
                    ch=getchar();
                    if(ch=='y'||ch=='Y')
                    {
                        goto Down;
                    }
                    fflush(stdin);
                    system("cls");
                    break;

            }
    }
    Down:
    printf("\n\n*********Thanks for using FORK INFOSYSTEMS calculator service *********");
    printf("\n\n\t Press any key to exit application !!!!!\n");

    getch();
    return 0;
}
