#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory
 *
 * @b: memory allocated by malloc
 *
 * Return: pointer to the memory if success 98 if fail
 */

void *malloc_checked(unsigned int b)
{
	void * j;
	
	j = malloc(b);
	
	if (j == NULL)
		exit(98);
	return (j);
	/*achieng*/
}
