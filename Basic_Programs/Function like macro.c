 #include <stdio.h>
 #include <conio.h>
 #define SQU(x) (x*x)
  int main() 
  {
    int s ;
    printf("\nEnter a number for square = ");
    scanf("%d",&s);
    printf("Square is = %d",SQU(s));
    return 0;
    getch();
  }