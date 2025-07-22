#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int d;


int xorfun(int a, int b)
{
	d = a ^ b;
	return d;
}

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	
	for (int i = 0; i < c; i++)
	{
		xorfun(a, b);
		a = a ^ b;
	}

	printf("%d", d);
}