#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet using ascii values.
 *
 * Return: Always 0
 */

int main(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet != '{')
	{
		putchar (alphabet);
		alphabet++;
	}
	alphabet = 'A';
	while (alphabet != '[')
	{
		putchar (alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
