#include<stdio.h>
int main()
{
	float p,r,t,si,ci;
	printf("Enter the Principle =");
	scanf("%f",&p);
	printf("Enter the Time Period in YEARS =");
	scanf("%f",&t);
	printf("Enter the Rate of Interest =");
	scanf("%f",&r);
	si=p*t*r/100;
	ci=p*(1+r/100)*t;
	printf("\nThe Simple Interest =%f",si);
	printf("\nThe Compound Interest =%f",ci);
}




