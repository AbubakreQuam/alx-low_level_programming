#include "main.h"

/**
 * print_sign - checks for the sign of a number
 * @n: a number to be checked
 * Return: 1 for positive, 0 for 0, and -1 for negative number
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
