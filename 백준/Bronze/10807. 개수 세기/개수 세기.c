#include <stdio.h>

int main()
{
    int n; 
    scanf("%d",&n);
    int number[n];
    for (int i=0 ; i<n; i++)
    {
        scanf("%d ",&number[i]);
    }
    
    int v;
    scanf("%d",&v);
    int count=0;
    
    for(int i=0 ; i<n; i++)
    {
        if (v==number[i])
            count++;
    }
    
    printf("%d",count);
    
    
}