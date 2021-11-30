/* 
    Algorithm
             1. Start 
             2. Accept a Number,Divisor from the user
             3. Name the Number as num and Divisor as divisor 
             4. Substract Divisor(divisor) from the Number(num) untill the Number is less than Divisor 
             5. Assign the value which we get less than Divisor to num
             6.Print the Remainder
             7.Stop 
*/

#include<stdio.h>
int main()
{
	float num,divisor;

	printf("Enter the Number : ");
	scanf("%f",&num);

	printf("Enter the Divisor : ");
	scanf("%f",&divisor);

	while(num>=divisor)
	{
		num = num-divisor;
	}
		printf("The Remainder is = %f",num);
}
 
/* 
   Output 
   
   Enter the Number : 10
   Enter the Divisor : 2
   The Remainder is = 0.000000   
*/   
