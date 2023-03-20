#include <stdio.h>

/**
 * main - print string
 *
 * Description: use printf to print string
 *
 * Return: 0 for success
 *
 */

int main(void)
{
	char a;

	while (a <= 'z')
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
