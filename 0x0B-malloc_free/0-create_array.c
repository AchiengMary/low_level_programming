#include <stdlib.h>
#include "main.h"
/**
 * *create_array- creates an array of characters
 *
 * Return: NULL( size==0)
 */
char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int i;
	if (size == 0)
		retern (NULL);
	x = (char *)malloc(sizeof(char)*size);
	if(x == NULL)
		return (NULL);
	for (i = 0; i<size; i++)
		x[i] = c;
	return (x);
}
