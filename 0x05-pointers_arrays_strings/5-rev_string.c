#include "main.h"

/**
 * rev_string - Reverses a string
 *
 * @s: String
 */

void rev_string(char *s)
{
	int length;
	int start;
	char rev;

	for (length = 1; s[length]; length++)
	{}

	for (start = 0; start < length; start++, length--)
	{
		rev = s[length - 1];
		s[length - 1] = s[start];
		s[start] = rev;
	}
}
