#include "main.h"

/**
 * clear_bit- sets value of bit to 0
 *
 * @n: bit to be cleared
 * @index: position to be cleared
 *
 * Return: 1 or -1 incase of error
 */

int clear_bit(unsigned long int *n, unsigned int index)
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
	mask = ~(1UL << index);
	*n &= mask;
	return 1;
}
