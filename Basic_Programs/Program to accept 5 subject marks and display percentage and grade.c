///Progarm to accept 5 subject marks and calculate marks
///and display percentage and grade of student.

    #include<stdio.h>
    #include<conio.h>

    int main()
    {
        int Sub1=0, Sub2=0, Sub3=0, Sub4=0, Sub5=0, Total;
        float per=0.00;
        char Grade ='\0';

        printf("Enter 5 subject marks :");
        scanf("%d\t%d\t%d\t%d\t%d",&Sub1,&Sub2,&Sub3,&Sub4,&Sub5);

        Total=Sub1+Sub2+Sub3+Sub4+Sub5;
        per=Total/5.0;

        if(per>80)
        {
           Grade='A';
        }
        else if(per>=70 && per<=80)
        {
            Grade='B';
        }
        else if(per>=60 && per<=70)
        {
            Grade='C';
        }
        else if(per>=40 && per<=60)
        {
            Grade='D';
        }
        else
        {
            Grade='E';
        }
        printf("\n\n\tTotal : %d\n\tPercentage : %0.2f\n\tGrade : %c",Total,per,Grade);

        getch();
        return 0;
    }
