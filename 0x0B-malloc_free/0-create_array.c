#include "main.h"
#include <stdlib.h>
/**
*main - malloc and free
*
*Return: 0.
*/
char *arrays_allocation(unsigned int size('4'), char('G'));
{
  arrays_allocation = malloc(sizeof(char)*4);
  arrays_allocation[0] = 'G';
  arrays_allocation[1] = 'O';
  arrays_allocation[2] = 'H';
  arrays_allocation[3] = '\0';
  _putchar("%s\n" ,arrays_allocation);
  return (0);
/*achieng*/
}
