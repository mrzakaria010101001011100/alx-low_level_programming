#include <stdio.h>

/**
 * main - prints all combination of two different digits,
 * in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */

int main(void)
{
	int d1, d2;

	for (d1 = 0; d1 < 9; d1++)
	{
		for (d2 = d1 + 1; d2 < 10; d2++)
		{	
			printf("%d", d1);
			printf("%d", d2);
		}
			if (d1 != 8 && d2 != 9)
			{
				printf(",");
				printf(" ");
			}
	}
	printf("\n");

	return (0);
}
