 #include <stdio.h>
 #include <conio.h>
  int main() 
  {
    int no=0, dig=0, temp=0, odd=0;
    
    printf("Enter a positive number :");
    scanf("%d",&no);
    
    temp = no;
    
    while(temp > 0)
    {
        dig = temp % 10;
        
        if(dig % 2 == 1)
        {
            odd++;
        }
        temp = temp / 10;
    }
    printf("\ncount of odd digit in %d is = %d",no,odd);
    
    getch();
    return 0;
  }