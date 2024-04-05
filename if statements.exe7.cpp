//to calculate bonus of an employee
/*Input salary and exp in years if exp in years if exp<=5 then bonus is 5% on salary
else if exp>5 and exp<=10 then bonus 10%
else if exp>10 and exp<=15 then bonus is 15% else bonus is 20% */
#include<stdio.h>
int main()
{
	float sal,exp,bon;
	printf("Enter the salary,Experience\n");
	scanf("%f%f%f",&sal,&exp,&bon);
	if (exp<=5)
	bon=0.05*sal;
	else if (exp>5 && exp<=10)
	bon=0.1*sal;
	else if (exp>10 && exp<=15)
	bon = sal*0.2;
	printf("Bonus is %f ",bon);
	
}
	
