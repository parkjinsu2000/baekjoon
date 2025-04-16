#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int num[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    int min,max;
    min=num[0];
    max=num[0];
    for(int i=0; i<n; i++)
    {
        if (num[i]>max)
            max=num[i];
        else if(num[i]<min)
            min=num[i];
    }
    printf("%d %d",min,max);
    
   
 }