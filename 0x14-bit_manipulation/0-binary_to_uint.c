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
        return 0;
       	unsigned int result = 0;
	for (int i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			result <<= 1; // Left-shift the result by 1 position
		}
		else if (b[i] == '1')
		{
			result = (result << 1) | 1; // Left-shift and set the least significant bit to 1
		}
		else
		{
			// Invalid character encountered
			return 0;
		}
	}
	return result;
}
