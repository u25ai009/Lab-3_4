#include<stdio.h>

int main()
{
    int n,x,y;
    
    printf("Enter your number : ");
    scanf("%d",&n);
    int i;
	int sum = 0;
    for(i = 1; n != 0; i++)
    {
        y = n/10;
        x = n - y*10;
        
        sum+=x;
        
        n/=10;
	}
        
    printf("The sum of individual digits of the number is : %d",sum);
	
}
