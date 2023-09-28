#include "main.h"

/**
 * get_endianness- checks the endianness
 *
 * Return: 0 if big endiann
 */

void exit(int status);

int get_endianness()
{
	unsigned int num = 1;
	char *byte_ptr = (char *)&num;
	
	if (*byte_ptr == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
