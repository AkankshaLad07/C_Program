#include<stdio.h>
#include<conio.h>
int main() 
{
  int i=0, j=0, s=0;
  printf("\nEnter size : ");
  scanf("%d",&s);
  
  for(i=1;i<=s;i++)
  {
    for(j=1;j<=(s*2)-1;j++)
    {
      if(j>=s-(i-1)&& j<=s+(i-1))
      {
        printf(" * ");
      }
      else
      {
        printf("   ");
      }
    }
    printf("\n");
  }
  getch() ;
  return 0;
}
