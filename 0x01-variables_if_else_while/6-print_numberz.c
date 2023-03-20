#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers of base 10 starting at 0
 *
 * Return: Always 0
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
