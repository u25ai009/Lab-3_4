#include<stdio.h>

int main()
{
    int n,x,y;
    
    printf("Enter your number : ");
    scanf("%d",&n);
    
    for(int i = 1; i>0; i++)
    {
        int sum = 0;
        for(int i = 1; n != 0; i++)
        {
            y = n/10;
            x = n - y*10;
        
            sum+=x;
        
            n/=10;
        }
    
        if(sum >= 10)
        {
            n = sum;
        }
        else if(sum >= 0 && sum <= 9)
        {
            printf("%d",sum);
            break;
        }    
    }    
        
}