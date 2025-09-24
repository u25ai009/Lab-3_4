#include<stdio.h>

int main()
{
    int x,y,newt,n;
    x = 0;
    y = 1;
    
    printf("Enter the n for fibonacci series : ");
    scanf("%d",&n);
    
    printf("%d\t",x);
    printf("%d\t",y);
    
    for(int i = 1; i<=(n-2); i++)
    {
        newt = x + y;
        x = y;
        y = newt;
        printf("%d\t",y);
    }    
}