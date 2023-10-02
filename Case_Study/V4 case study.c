//////////////////////////////////////////////////////////////////////////
///                                                                    ///
///         Student Information System For Admissions Of Courses       ///
///                                                                    ///
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

struct stud
{
        int RNo;
        char Name[50];
        int Math;
        int Chem;
        int Phy;
        float Total;
        float Per;
};
int main()
{
        void Accept_Student_Details(struct stud*);
        void Display_Student_Details(struct stud*);

        struct stud Std[3];
        int i=0 ;
        for( i=0 ; i<3 ; i++)
        {
                printf("\nEnter Student %d Details => ",i+1);
                Accept_Student_Details(&Std[i]);
        }
        printf("\n\nEntered  Students Details Are =>\n\n");

        for( i=0 ; i<3 ; i++)
        {
                printf("\n%d Student Details => ",i+1);
                Display_Student_Details(&Std[i]);
        }

        printf("\n\nThanks for using our application !!!!!");
        getch();
        return 0;
}
void Accept_Student_Details(struct stud *Ptr)
{
        printf("\nEnter Roll No. : ");
        scanf("%d",&Ptr->RNo);

        fflush(stdin);
        printf("\nEnter Name : ");
        gets(Ptr->Name);

        printf("\nEnter Mathematics Mark : ");
        scanf("%d",&Ptr->Math);

        printf("\nEnter Chemistry Mark : ");
        scanf("%d",&Ptr->Chem);

        printf("\nEnter Physics Mark : ");
        scanf("%d",&Ptr->Phy);

        Ptr->Total = Ptr->Math + Ptr->Chem + Ptr->Phy;
        Ptr->Per = (Ptr->Total/300)*100;

}
void Display_Student_Details(struct stud *Ptr)
{
                printf("\n---------------------------------------------------------------");
                printf("\n\t\tRoll Number      : %d",Ptr->RNo);
                printf("\n\t\tStudent Name     : %s",Ptr->Name);
                printf("\n\t\tMathematics Mark : %d",Ptr->Math);
                printf("\n\t\tChemistry Mark   : %d",Ptr->Chem);
                printf("\n\t\tPhysics Mark     : %d",Ptr->Phy);
                printf("\n\t\tTotal            : %0.0f",Ptr->Total);
                printf("\n\t\tPercentage       : %0.3f",Ptr->Per);
                printf("\n---------------------------------------------------------------");
}

