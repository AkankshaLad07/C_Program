#include <stdio.h>
#include <conio.h>
int main() 
{
  int Num =0 , Temp=0 , Dig=0 , Srh=0 , Cnt=0 ;
  
  printf("\nEnter number : ");
  scanf("%d",&Num);
  printf("\nEnter digit for search : ");
  scanf("%d",&Srh);
  
  Temp=Num ; 
  
  while(Temp > 0)
  {
    Dig = Temp%10;
    if(Srh==Dig)
    {
       Cnt++;
    }
    Temp = Temp/10;
  }
  printf("\n%d is found in %d at %d times. ",Srh, Num, Cnt);
  getch() ;
  return 0;
}