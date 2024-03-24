 #include <stdio.h>
 #include <conio.h>
 int main() 
 {
   int no=0 , num=20 ;
   
   no = num++;
   printf("%d  %d  %d  %d  %d",no,no++,++no,no++,no);

   getch();
 }