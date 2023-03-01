#include "holberton.h"

/**
 * print_alphabet - prints alphabets in lower case followed by a new line
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');

}
