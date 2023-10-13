#include"main.h"

/**
 * print_numbers - print 0 - 9
 * onlty using _putchar twice
 * Return: Always 0
*/
void print_numbers(void);
{
	int mun = 0;

	while (mun <= 9)
	{
		_putchar(mun);
		mun++;
	}
	_putchar('\n');
}
