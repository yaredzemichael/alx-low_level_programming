#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from
 *
 * Return: Everything worked ok
 */

int main(void)
{
	printf("%s\n", _FILE__);
	return (0);
}
