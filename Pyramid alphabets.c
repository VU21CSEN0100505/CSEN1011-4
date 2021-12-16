#include <stdio.h>
int main() 
{
   int i, j, rows;
   char a;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) 
   {
      for (j = 1; j <= i; ++j)
	   {
	   	 a = j+64;
         printf("%c ", a);
       }
      printf("\n");
   }
   return 0;
}
