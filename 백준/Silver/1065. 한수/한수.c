#include <stdio.h>

int main(void)
{	
	int n;
	scanf("%d", &n);
	int count = 0;
	if (n < 100)  //일의 자리 숫자
	{
		count = n;
	}
	else
	{	
		count = 99;
		
		for (int i = 100; i <= n; i++)
		{	
			int a, b, c;
			a = i / 100;
			b = (i % 100) / 10;
			c = (i % 10);
			if (2 * b == a + c)
			{
				count++;
			}
		}
	}
	printf("%d", count);

	return 0;
}