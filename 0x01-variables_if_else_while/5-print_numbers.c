#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers of base 10 starting from 0
 *
 * Return: Always 0
 */

int main(void)
{
	int num;

	num = 0;
	while (num <= 9)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);
}
