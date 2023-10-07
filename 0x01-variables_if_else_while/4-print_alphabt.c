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
	char letter;

	/*prints a - z except q and e*/
	for (letter = 'a'; letter <= 'z'; letter++)
{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
}
	putchar('\n');
return (0);
}


