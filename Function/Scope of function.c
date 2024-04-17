#include <stdio.h>
#include <conio.h>
int main() 
{
  int first = 10;
  int second = 20;
  int third = 30;
  
  {
    int third = second - first;
    printf("\n%d",third);
  }
  
  printf("\n%d",third);
  getch() ;
  return 0;
}