#include<stdio.h>

int main()
{
	float i,n;
	
	printf("Enter the number n : ");
	scanf("%f",&n);
	
	float ans = 0;
	for(i = 1; i <= n; i++)
	{
		float j;
		float x = 1;
		
		for(j = 1; j<=n; j++)
		{
			x*=j;
		}
		
		ans = ans + (i/x);
		
	}
	
	printf("%f",ans);
	return 0;
}
