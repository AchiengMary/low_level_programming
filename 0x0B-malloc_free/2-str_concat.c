#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - conactenates two strings
 *
 * @s1: string one to concatenate
 * @s2: string two to conacatenate
 *
 * Return: fail(NULL), Success(string)
 */

char *str_concat(char *s1, char *s2)
{
	char *answer;
	int i = 0, j = 0, len1 = 0, len2 = 0, len = len1 + len2;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
				len1++;
	}
	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
				len2++;
	}

	answer = (char *)malloc(sizeof(char) * (len + 1));
	if (answer == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		answer[i] = s1[i];
	for (j = 0; j < len2; j++, i++)
		answer[i] = s2[j];
	answer[len] = '\0';
	return (answer);
	/*achieng*/
}

