#include<stdio.h>

int main()
{
	int n,i;
	
	int x = 0; //flag
	
	printf("Enter the number n : ");
	scanf("%d",&n);
	
	for(i = 2; i < n; i++)
	{
		if(n%i == 0)
		{
			x = 1;
			break;
		}
	}
	
	if(x == 1)
	{
		printf("Not Prime");
	}
	else // x == 0
	{
		printf("Prime");
	}
	
}
