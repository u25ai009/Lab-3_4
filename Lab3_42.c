#include<stdio.h>

int main()
{
    int n;
    int flag = 0;
    printf("Enter the number : ");
    scanf("%d",&n);
    
    if(n == 1 || n <= 0)
    {
        printf("Your entered number %d is neither prime nor composite.",n);
        exit(1);
    }
    
    for(int i = 2; i < n; i++)
    {
        if(n%i == 0)
        {
            flag = 1;
            break;
        }
    }
    
    if(flag == 0)
    {
        printf("Your entered number %d is prime.",n);
    }
    else
    {
        printf("Your entered number %d is composite.",n);
    }    
}