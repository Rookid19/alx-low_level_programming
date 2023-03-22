#include "main.h"

/**
* main - Print the word "_putchar"
*
* Description: prints a random number and evaluates if it's positive, negative
* or zero
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	char pArr[] = "_putchar";

	for (i = 0; i < 8; i++)
		{
		_putchar(pArr[i]);
		}
		_putchar('\n');
	return (0);
}
