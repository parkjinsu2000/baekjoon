#include<stdio.h>

int main()
{
    int num[9];
    for(int i=0 ; i<9 ; i++)
    {
        scanf("%d",&num[i]);
    }
    int max=0;
    int max_index=0;
    for(int i=0 ; i<9 ; i++)
    {
        if(num[i]>max)
        {
            max=num[i];
            max_index=i;
        }
          
        
    }
    printf("%d\n",max);
    printf("%d\n",max_index+1);
    
    
}