#include <stdio.h>
#include <stdlib.h>


/**
 *  Entry point
 *
 * Return: Always 0 (Success)
 */


int main(void)

{

        char x;

        for (x = 0; x<10; x++)
        {
        putchar(x + '0');
	}       
        putchar ('\n');
        return (0);
}
