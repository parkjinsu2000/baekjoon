#include <stdio.h>

int main(void)
{
	int number;
	int rest[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &number);
		rest[i] = number % 42;
	}
	int count[42] = { 0 };

	for (int i = 0; i < 10; i++)
	{
		
		count[rest[i]]++;
	
	}
	
	int a = 0;
	for (int i = 0; i < 42; i++)
	{
		if (count[i] != 0)
		{
			a++;
		}
	}

	printf("%d", a);



	return 0;
}