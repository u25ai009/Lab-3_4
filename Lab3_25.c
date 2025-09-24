#include<stdio.h>

int main()
{
	int i,j,n;
	
	printf("Enter the number n : ");
	scanf("%d",&n);
	
	for(i = 1; i <= 10; i++)
	{
		printf("%d * %d = %d \n",n,i,(n*i));
	}
}
