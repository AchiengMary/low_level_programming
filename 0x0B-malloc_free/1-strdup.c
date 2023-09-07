#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - function that copies string,
 * and returns a pointer to the copy's location
 *
 * @str: string to be copied
 *
 * Return: Success(Pointer to copy) NULL(Fail)
 */

char *_strdup(char *str)
{
	char *copy;
	unsigned int i, len;

	i = 0;
	len = 0;
	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;
	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);
	while ((copy[i] = str[i]) != '\0')
		i++;
	return (copy);
	/*achieng*/
}
