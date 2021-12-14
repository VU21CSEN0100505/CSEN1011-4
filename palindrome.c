#include<stdio.h>
int main ()
{
	int num1,num2,Num,R;
	
	printf("Enter a Number : ");
	
	scanf("%d",&num1);
	
	num2 = num1;
	
	while(num1!=0)
	{
		R   = num1%10;
		Num = (Num*10)+R;
		num1 = num1/10;
	}
	
	if(num2==Num)
	{
		printf("The Given Number is Palindrome");
	}
	else
    {
	    printf("The Given Number is Not a Palindrome");
	}
	
}

3

