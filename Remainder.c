/* Algorithm
   1. Start 
   2. Accept a number, divisor from the user
   3. Declare a Variable */#include<stdio.h>
int main()
{
	float num,divisor,remainder;

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
