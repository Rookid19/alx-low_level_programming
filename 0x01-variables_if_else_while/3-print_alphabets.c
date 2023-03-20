#include <stdio.h>

/**
 * main - print string
 *
 * Description: use printf to print string
 *
 * Return: 0 for success
 */
int main(void)
{
	char letter;

	while ('a' != '{')
	{
		putchar (letter);
		letter++;
	}
	while ('A' != '[')
	{
		putchar (letter);
		letter++;
	}

	putchar('\n');
	return (0);
}
