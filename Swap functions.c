#include <stdio.h>
 
void swap(int*, int*);
 
int main()
{
   int m, n;

   printf("Enter the value of 2 Numbers");
   scanf("%d%d",&m,&n);
 
   swap(&m, &n); 
 
   printf("After Swapping m = %d n = %d", m, n);
 
   return 0;
}
 
void swap(int *a, int *b)
{
   int temp;
 
   temp = *b;
   *b = *a;
   *a = temp;   
}
 
