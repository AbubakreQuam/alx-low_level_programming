#include "main.h"

/**
 * print_alphabet_x10 - prints the lower alphabet 10 times
 * each time in new line
 */

void print_alphabet_x10(void)
{
	int i = '0';
	char letter = 'a';

	while (i <= '9')
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		i++;
	}
}
