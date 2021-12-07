#include <stdio.h>
int main()
{
	int n,R=0,r,i,x;
	
	printf("Enter a Number = ");
	
	scanf("%d",&n);
	
	x = n-1;
	
    for(i=1;i<=x;i++)
	{
		r = n % i;
		
		if(r==0)
		{
			R+=i; 
		}
	}
	 if(R==n)
	 printf("The Given Number is Perfect Number");
	 else
	 printf("The Given Number is Not a Perfect Number");
	
}
