#include<stdio.h>
#include<math.h>

int main()
{
	int n,i;
	
	printf("Enter the number n : ");
	scanf("%d",&n);
	
	for(i = 1; i <= n; i++)
	{
		int x = pow(i,2);
		printf("%d , ",x);
	}

}
