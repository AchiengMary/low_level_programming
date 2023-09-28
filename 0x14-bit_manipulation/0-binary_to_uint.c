#include "main.h"

/**
*binary_to_unit- converts a binary number to an unsiged int
*
*@b: points to a string of 0s and 1s
*
*Returns: the converted number
*/

unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
	{
		return 0;
	}
	unsigned int result = 0;
	for (int i = strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return 0;
		}
		result += (1 << i) * (b[i] - '0');
	}
	return result;
}