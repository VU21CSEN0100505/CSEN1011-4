#include <stdio.h>
int main()
{
	float basic, da, hra, ta, others,pf,it,net_salary;
	printf("Enter Basic Salary : ");
	scanf("%f",&basic);
	printf("Enter TA : ");
	scanf("%f",&ta);	
	printf("Enter others : ");
	scanf("%f",&others);	
	da = (basic*12)/100;
	pf = (basic*14)/100;
	it = (basic*15)/100;
	hra= (basic*40)/100;
	net_salary = basic + da + hra + ta + others - (pf+it);
	printf("Net Salary is: %f\n",net_salary);
	
	return 0;
}
