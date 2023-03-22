#include "main.h"

/**
 * print_alphabet_x10 - print with func
 *
 */
void print_alphabet_x10(void)
{
	int letter;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar ('\n');
	}
}
