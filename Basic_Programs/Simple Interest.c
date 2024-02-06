 #include <stdio.h>
 #include <conio.h>
  int main() 
  {
    float P=0, R=0, N=0, SI=0;
    
    printf("\nEnter principal amount : ");
    scanf("%f",&P);
    printf("\nEnter Rate : ");
    scanf("%f",&R);
    printf("\nEnter time for interest : ");
    scanf("%f",&N);
    
    SI = (P*R*N)/100;
    
    printf("\nSimple Interest is %f",SI);
    getch();
    return 0;
  }