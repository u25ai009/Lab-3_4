#include<stdio.h>
#include<math.h>

int main()
{
	int n,x;
	
	printf("Enter the three digit number n : ");
	scanf("%d",&n);
	
	int n1,n2,n3;
	
	n3 = n/100;
	n2 = (n - n3*100)/10;
	n1 = (n - (n3*100) - (n2*10));
	
	x = pow(n1,3) + pow(n2,3) + pow(n3,3);
	
	if(x == n)
	{
		printf("The entered number is an armstrong number. \n");
	}
	else
	{
		printf("The entered number is not an armstrong number. \n");
	}
	
}
