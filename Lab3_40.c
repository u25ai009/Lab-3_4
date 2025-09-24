#include<stdio.h>

int main()
{
    int n;
    int sum = 0;
    
    for(int i = 1; i>0; i++)
    {
        printf("Enter the number : ");
        scanf("%d",&n);
        
        if(n < 0)
        {
            break;
        }
        
        sum+=n;
    }
    
    printf("Total sum of all non negative numbers entered is : %d",sum);        
}