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

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		fprintf(stderr, "Error: Index out of range.\n");
		exit(EXIT_FAILURE);
	}
	unsigned long int mask = 1UL << index;
	if ((n & mask) == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
