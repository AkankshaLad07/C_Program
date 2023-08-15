 #include <stdio.h>
 #include <conio.h>
  int main() 
  {
    int no=0, dig=0, temp=0, max=0;
    
    printf("Enter a positive number :");
    scanf("%d",&no);
    
    temp = no;
    
    while(temp > 0)
    {
        dig = temp % 10;
        
        if(max < dig)
        {
            max = dig;
        }
        temp = temp / 10;
    }
    printf("\nMaximum digit in %d is = %d",no,max);
    
    getch();
    return 0;
  }