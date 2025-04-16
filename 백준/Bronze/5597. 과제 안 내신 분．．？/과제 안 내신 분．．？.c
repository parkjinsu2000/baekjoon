#include <stdio.h>

int main(void)
{	
	int student[30] = { 0 };

	for (int i = 0; i < 28; i++)
	{
		int a;
		scanf("%d",&a);
		student[a-1] = a;
	}
	int index[2];
	int* pi = index;

	for (int i = 0; i < 30; i++)
	{
		if (student[i] == 0)
		{
			*pi = i+1;
			pi++;
		}
	}

	printf("%d\n", index[0]);
	printf("%d\n", index[1]);


	return 0;
}