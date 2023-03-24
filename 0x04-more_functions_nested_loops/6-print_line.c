#include "main.h"

/**
* print_line - Draws a straight line in the terminal
* @n: Number of times of the character '_'
*/

void print_line(int n)
{
	char d;

	for (d = 0; d < n; d++)
		_putchar('_');
	_putchar('\n');
}
