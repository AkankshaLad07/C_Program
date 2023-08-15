 #include <stdio.h>
 #include <conio.h>
  int main() 
  {
    int no=0, dig=0, temp=0,min=0;
    
    printf("Enter a positive number :");
    scanf("%d",&no);
    
    temp=no;
    min = temp % 10;
    
    while(temp > 0)
    {
        dig = temp % 10;
        
        if(min > dig)
        {
            min = dig;
        }
        temp = temp / 10;
    }
    printf("\nMinimum digit in %d is = %d",no,min);
    
    getch();
    return 0;
  }