#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of code
 *
 * Description: Gets the last number and checks if is postive zero of negative
 *
 * Return: Always 0
 */

int main(void)
{
	int n;
	char *message;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 == 0)
		message = "and is 0";
	else if (n % 10 > 5)
		message = "and is greater than 5";
	else if (n % 10 < 6)
		message = "and is less than 6 and not 0";
	printf("Last digit of %d is %d %s\n", n, n % 10, message);
	return (0);
}
