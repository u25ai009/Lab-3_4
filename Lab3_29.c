#include<stdio.h>

int main()
{
	int n,x;
	
	printf("Enter the three digit number n : ");
	scanf("%d",&n);
	
	int n1,n2,n3;
	
	n3 = n/100;
	n2 = (n - n3*100)/10;
	n1 = (n - (n3*100) - (n2*10));
	
	x = n1*100 + n2*10 + n3;
	
	if(x == n)
	{
		printf("The entered number is a Palindrome.");
	}
	else
	{
		printf("The entered number is not a Palindrome.");
	}
}
