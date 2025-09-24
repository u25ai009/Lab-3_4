#include<stdio.h>
#include<math.h>

int main()
{
	float Y,x,n;
	
	printf("Enter value of x : ");
	scanf("%f",&x);
	
	printf("Enter value of n : ");
	scanf("%f",&n);
	
	if(n == 1)
	{
		Y = 1 + x;
		printf("%f",Y);
	}
	else if(n == 2)
	{
		Y = 1 + x/n;
		printf("%f",Y);
	}
	else if(n == 3)
	{
		Y = 1 + pow(x,n);
		printf("%f",Y);
	}
	else if(n > 3 && n < 1)
	{
		Y = 1 + n*x;
		printf("%f",Y);
	}
}

