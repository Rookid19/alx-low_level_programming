#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 *
 * @n: number
 *
 * Return: The last digit
 *
 */

int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		n *= -1;
	}
	_putchar(n + 48);
	return (n);
}
