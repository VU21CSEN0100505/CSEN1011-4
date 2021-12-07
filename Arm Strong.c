#include<stdio.h>
int main()
{
	int n,N,p,q=0; 
	
	printf("Enter a Number =");
	
	scanf("%d",&n);
	
	N = n;
	
	while(N>0)
	{
		p  = N % 10;
		
		q  = q+(p*p*p);
		
		N  = N / 10; 
	}
	
	if (n==q)
		printf("The Given Number is Arm Strong Number");
	else
	    printf("The Given Number is Not a Arm Strong Number");
	
}
