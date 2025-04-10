#include <stdio.h>

int main()
{
    int hour;
    int min;
    scanf("%d %d",&hour,&min);
    if(min>=45)
    {
        printf("%d %d",hour,min-45);
    }
        else
        {
            if(hour>=1)
            printf("%d %d",hour-1,min+15);
            else
                printf("%d %d",hour+23,min+15);
        }
    
}