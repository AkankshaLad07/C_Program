 #include <stdio.h>
 #include <conio.h>
  int main() 
  {
    int no=0, dig=0, temp=0, even=0;
    
    printf("Enter a positive number :");
    scanf("%d",&no);
    
    temp = no;
    
    while(temp > 0)
    {
        dig = temp % 10;
      
        if(dig % 2 == 0)
        {
            even++;
        }
        temp = temp / 10;
    }
    printf("\ncount of even digit in %d is = %d",no,even);
    
    getch();
    return 0;
  }