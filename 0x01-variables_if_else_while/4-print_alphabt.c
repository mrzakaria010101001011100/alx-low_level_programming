#include <stdio.h>

/**
 * main  - prints the alphabet in lowercase, except for q and e.
 * 
 * return: always 0.
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


