#include<stdio.h>

int main()
{
	int n,i;
	
	printf("Enter the number n : ");
	scanf("%d",&n);
	
	int sum_odd = 0;
	int sum_even = 0;
	
	for(i = 1; i <= n; i++)
	{
		if(i%2 == 0)
		{
			sum_even+=i;
		}
		
		else // if(i%2 != 0)
		{
			sum_odd+=i;
		}
	}
	
	printf("The sum of all even numbers between 1 to n : %d \n",sum_even);
	printf("The sum of all odd numbers between 1 to n : %d \n",sum_odd);
}
