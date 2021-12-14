#include<stdio.h>
int main()
{
	int num,R,result=0;
	
	printf("Enter a Number : ");
	
	scanf("%d",&num);
	
	while(num!=0)
	{
		R      = num%10;
		result = (result*10)+R;
		num    = num/10;
	}
	printf("The Reverse Of  the Number is = %d",result);
	
}


