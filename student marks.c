#include<stdio.h>
int main()
{
	int a,b,c,d,e,t,avg,p;
	printf("Enter The Marks of Subject 1 =");
	scanf("%d",&a);
	printf("Enter The Marks of Subject 2 =");
	scanf("%d",&b);
	printf("Enter The Marks of Subject 3 =");
	scanf("%d",&c);
	printf("Enter The Marks of Subject 4 =");
	scanf("%d",&d);
	printf("Enter The Marks of Subject 5 =");
	scanf("%d",&e);
	t=a+b+c+d+e;
	avg=(a+b+c+d+e)/5;
	p=(t*100)/500;
	printf("\nTotal Marks =%d",t);
	printf("\nAverage Marks =%d",avg);
	printf("\nPercentage =%d",p);
}

