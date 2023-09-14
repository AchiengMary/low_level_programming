#include "function_pointers.h"

/**
  * int_index - function to be used
  * @array: array to be used
  * @size: size of the array
  * @cmp: the pointer to the function
  *
  * Return: -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
