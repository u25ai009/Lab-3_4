#include<stdio.h>

int main()
{
    int num[7] = {1,3,6,8,11,9,3};
    
    for(int i = 0; i<7; i++)
    {
        int flag = 0;
        for(int j = 0; j<7; j++)
        {
            if(num[i] < num[j])
            {
                flag = 1;
                break;
            }
        }
        
        if(flag == 0)
        {
            printf("%d is the Largest number among all.\n",num[i]);
            num[i] = 0;
            break;
        }    
        
    }    
    
    for(int i = 0; i<7; i++)
    {
        int flag = 0;
        for(int j = 0; j<7; j++)
        {
            if(num[i] < num[j])
            {
                flag = 1;
                break;
            }
        }
        
        if(flag == 0)
        {
            printf("%d is the second largest number among all.",num[i]);
        }    
        
    }
    
    
}