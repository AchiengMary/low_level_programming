#include "main.h"

/**
 * set_bit- sets value of bit to 1
 *
 * @n: initial value
 * @index: index to be set to 1
 *
 * Return: 1 and -1 incase of an error
 */

void exit(int status);

int set_bit(unsigned long int *n, unsigned int index) 
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
	*n |= mask;
	return 1;
}
