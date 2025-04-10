#include <stdio.h>

int main()
{
    int hour,min;
    scanf("%d %d",&hour,&min);
    int current_min=hour*60+min;
    int need_min;
    scanf("%d",&need_min);
    
    int total_min=hour*60+min+need_min;
    
    if(total_min>=1440)
        total_min-=1440;
    
    printf("%d %d",total_min/60,total_min%60);
    
    
}