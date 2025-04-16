#include <stdio.h>

int main()
{
	int n = 0; 
	int m = 0;
	scanf("%d %d", &n, &m);
	int num[100] = { 0 };


	for (int j = 0; j < m;j++)
	{
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		for (int i = a; i <= b;i++)
		{
			num[i] = c;
			
		}
	}

	for (int i = 1; i <= n; i++)
	{
		printf("%d ", num[i]);

	}

}