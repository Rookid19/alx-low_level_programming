#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet except e and q
 *
 * Return: Always 0
 */

int main(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet != '{')
	{
		if (alphabet != 'e' && alphabet != 'q')
		{
			putchar (alphabet);
		}
		alphabet++;
	}
	putchar('\n');
	return (0);
}
