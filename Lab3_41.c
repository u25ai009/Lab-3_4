#include<stdio.h>

int main()
{
	int i,j,n;
	
	printf("Enter the number : ");
	scanf("%d",&n);

	for(i = 1; i<=n; i++)
	{
		if(n%i == 0)
		{
			printf("Factors of number %d = %d \n",n,i);
		}
	}
	
}
