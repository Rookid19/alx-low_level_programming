#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet using ascii reverse
 *
 * Return: Always 0
 */

int main(void)
{
	char alphabet;

	alphabet = 'z';
	while (alphabet != '`')
	{
		putchar (alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
