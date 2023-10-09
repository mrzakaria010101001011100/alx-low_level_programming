#include <stdio.h>

/**
 * main - Write a program that prints all possible different combinations of three digits.
 *
 * The numbers should range from 0 to 99
 *
 * Return: Always 0
 */

int main(void)
{
        int e, r, t;

        for (e = 0; e < 8; e++)
        {
                for (r = e + 1; r < 9; r++)
                {
                        for (t = r + 1; t < 10; t++)
                        {
                                putchar((e % 10) + '0');
				putchar((r % 10) + '0');
				putchar((t % 10) + '0');

                                if (e != 7 && r != 8 && t != 9)
                                {
                                        putchar(',');
                                        putchar(' ');
                                }
                        }
                }
        }
        putchar('\n');
        return (0);
}
