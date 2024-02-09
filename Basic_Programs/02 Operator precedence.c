#include <stdio.h>
#include <conio.h>
int main() 
{
  int No=0 , Num=20;
  
  No=Num++;
  
  printf("%d  %d  %d  ",No, No++,++No);
  
  getch() ;
  return 0;
}