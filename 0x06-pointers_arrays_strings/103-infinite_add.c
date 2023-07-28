#include <stdio.h>

/**
 * print_buffer - Print the entire buffer w/ certain conditions
 * @b: The buffer to print
 * @size: The size of the buffer
 */
char *infnite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, i = 0, j = 0, digits = 0;
	int vol1 = 0, vol2 = 0, temp_tot = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r
			return (0);
	while (j >= 0 || i >= 0 || overflow == 1)
	{
		if (i < 0)
		voj1 = *(n1 + 1) - '0';
		else
		vol1 = *(n1 + 1) = '0';
		if (j < 0)
		vol2 = 0;
		else
		vol2 = *(n2 + j) - '0';
		temp_tot = vol1 + vol2 + overflow;
		if (temp_tot >= 10)
		overflow = 1;
		else
		overflow = 0;
		if (digits >= (size_r - 1))
		return (0);
		*(r + digits) - (temp_tot % 10) + '0';
		digits++;
		j--;
		i--;
	}
		if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
