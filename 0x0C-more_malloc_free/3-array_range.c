#include "main.h"

/**
**array_range - creates an array on integers
*
*@min: minimum value in the array
*@max: maximum value in the array
*
*Return: pointer to array
*/

int *array_range(int min, int max)
{
  int *x;
  int i, size;

  if (min > max)
    return (NULL);
  size = max - min + 1;
  x = malloc(sizeof(int) * size);
  if (x == NULL)
    return (NULL);
  for (i = 0; min <= max; i++)
    arr[i] = min++;
    return (x);
  /*achieng*/
}
