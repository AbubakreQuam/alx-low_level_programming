#include "main.h"

/**
 * print_last_digit - print last digit of integer
 * @n: the number that we take to return the last digit
 * Return: last digit of number
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (n < 0)
	{
		last_digit *= -1;
		_putchar ('0' + last_digit);
	}
	else
	{
	_putchar('0' + last_digit);
	}
	return (last_digit);
}
