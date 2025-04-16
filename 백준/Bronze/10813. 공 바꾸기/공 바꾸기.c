#include <stdio.h>


int main(void)
{
	int n, m;
	scanf("%d %d", &n, &m);
	int array[100] = { 0 };
	for (int i = 1; i <= 100; i++)
	{
		array[i] = i;
	}
	for (int i = 0; i < m; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		int temp;
		temp = array[a];
		array[a] = array[b];
		array[b] = temp;
	}

	for (int i = 1; i <= n; i++)
	{
		printf("%d ", array[i]);
	}

	return 0;
}