/**
 * file: 6-print_numbers.c
 * single digit numbers of base 10
 */

#include <stdio.h>

/**
 * main - prints all single digit number of base 10 starting from 0,
 *  only using putchar and without char variable.
 *
 * return: always 0.
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar(n + '0');

	putchar('\n');

	return (0);

}
