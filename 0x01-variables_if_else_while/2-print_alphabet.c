#include <stdio.h>

/**
 * entre point alphabet
 *
 * we can use putchar in output
 *
 * alwys RETURN 0 (success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
{
	putchar(ch);
	 ch++;
	putchar('\n');
}
return (0);
}


