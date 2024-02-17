#include <stdio.h>
#include <conio.h>
int main() 
{
  int arr[5]={5, 9,32,70,5}  , i=5;
  
  for(i=0 ; i<5 ; i++)
  {
     printf("\nValue of arr[%d] = %d",i,*(arr+i));
     printf("\nAddress of arr[%d] = %u",i,arr+i);
  }
  getch() ;
  return 0;
}