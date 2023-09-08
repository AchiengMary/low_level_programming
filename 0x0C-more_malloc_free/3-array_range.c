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
  int *arr;
  int x, size;

  if (min > max)
    return (NULL);
  size = max - min + 1;
  arr = malloc(sizeof(int) * size);
  if (arr == NULL)
    return (NULL);
  for (x = 0; min <= max; x++)
    arr[x] = min++;
    return (arr);
  /*achieng*/
}
