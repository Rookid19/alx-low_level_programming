#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point of code
 *
 * Description: Prints a string
 *
 * Return: Always 1 (failure)
 */

int main(void)
{

char *message;

message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, message, 59);
return (1);
}
