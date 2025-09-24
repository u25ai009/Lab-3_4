#include<stdio.h>

int main()
{
	float units;
	float charges = 0;
	
	printf("Enter the units of electricity consumed : ");
	scanf("%f",&units);
	
	if(units > 600)
	{
		float x = units - 600;
		float a = (x*1.25 + 425);
		charges+=a;
		
		float b = (200*0.8 + 230);
		charges+=b;
		
		float c = (200*0.65 + 100);
		charges+=c;
		
		float d = (200*0.5);
		charges+=d;
	}
	else if(units > 400 && units <= 600)
	{
		float x = units - 400;
		float b = (x*0.8 + 230);
		charges+=b;
		
		float c = (200*0.65 + 100);
		charges+=c;
		
		float d = (200*0.5);
		charges+=d;
	}
	else if(units > 200 && units <= 400)
	{
		float x = units - 200;
		float c = (x*0.65 + 100);
		charges+=c;
		
		float d = (200*0.5);
		charges+=d;
	}
	else if(units > 0 && units <= 200)
	{
		float x = units;	
		float d = (x*0.5);
		charges+=d;
	}
	else
	{
		printf("You entered wrong units.");
	}
	
	printf("Your Total Electricity Bill is : %f",charges);
}
