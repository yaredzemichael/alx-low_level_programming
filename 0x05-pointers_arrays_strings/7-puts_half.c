#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int n = 0;
	int k;

	while (str[n] != '\0')
	{
		n++;
	}

	if (n % 2 == 1)
	{
		k = (n - 1) / 2;
		k += 1;
	}
	else
	{
		k = n / 2;
	}

	for (; k < n; k++)
	{
	_putchar(str[k]);
	}
	_putchar('\n');
}
