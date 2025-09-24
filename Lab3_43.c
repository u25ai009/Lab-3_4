#include<stdio.h>

int main()
{
	float sales;
	
	printf("Enter the value of sales : ");
	scanf("%f",&sales);
	
	if(sales>0 && sales<=500)
	{
		printf("You will be given 5percent comission = %f\n",sales*0.05);
		printf("Total money you will be receiving is : %f",sales + sales*0.05);
	}
	else if(sales>500 && sales<=2000)
	{
		printf("You will be given 10percent plus rps. 35 comission = %f\n",sales*0.10 + 35);
		printf("Total money you will be receiving is : %f",sales + sales*0.10 + 35);
	}
	else if(sales>2000 && sales<=5000)
	{
		printf("You will be given 12percent plus rps. 185 comission = %f\n",sales*0.12 + 185);
		printf("Total money you will be receiving is : %f",sales + sales*0.12 + 185);
	}
	else if(sales>5000)
	{
		printf("You will be given 12.5percent comission = %f\n",sales*0.125);
		printf("Total money you will be receiving is : %f",sales + sales*0.125);
	}
}
