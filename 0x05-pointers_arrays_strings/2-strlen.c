#include "main.h"

/**
*_strlen - returns the length of a string..
*@s: String
*Return: Integer that is the length of a string
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}
