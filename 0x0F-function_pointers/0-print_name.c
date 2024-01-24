#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints the name using pointer function
 * @name: name string
 * @f: pointer to function
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
