#include <stdio.h>

/**
 * main - entry point
 *
 * description: prints all alphbet letters lawercasa except q and e
 *
 * return: always 0 (success)
 */

int main(void)
{
	char ch = 'a';

	/*prints a - z except q and e*/
	for (ch <= 'z'; ch++)
{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
}
	putchar('\n');
return (0);
}


