#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - On new line print each element
 * @array: is an array
 * @size: how many elements print
 * @action: pointer to print in hex
 * 
 * Return: void
 */

 void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
