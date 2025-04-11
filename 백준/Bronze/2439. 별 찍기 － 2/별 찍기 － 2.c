#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    for(int j=0 ; j<n ; j++)
    {
        for (int i=0; i<n-j-1; i++)
    {
        printf(" ");
    }
    
    
    
    for (int i=0; i<j+1; i++)
    {
        printf("*");
    }
        printf("\n");
    }
    
    
}
