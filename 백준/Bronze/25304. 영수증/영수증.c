#include <stdio.h>

int main()
{
    int total_price;
    scanf("%d",&total_price);
    int type;
    int cal_price=0;
    scanf("%d",&type);
    for(int i=0; i<type; i++)
    {
        int price,ea;
        scanf("%d %d",&price,&ea);
        cal_price+=price*ea;
    }
    if (total_price==cal_price)
    printf("Yes");
    else
        printf("No");
    
}