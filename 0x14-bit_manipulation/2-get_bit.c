#include <stdlib.h>
#include "main.h"

/**
 * get_bit- returns the value of a bit at a given index
 *
 * @n: the bits to be checked
 * @index: index to be checked
 *
 * Return: -1 if error occurs
 */

void exit(int status);

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	if (index >= sizeof(unsigned long int) * 8)
	{
		char error_message[] = "Error: Index out of range.\n";
		int i;
		for (i = 0; error_message[i] != '\0'; i++)
		{
			putchar(error_message[i]);
		}
		return -1;
	}
	mask = 1UL << index;
	return (n & mask) ? 1 : 0;
}
