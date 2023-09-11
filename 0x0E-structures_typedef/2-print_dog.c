#include <stdio.h>
#include "dog.h"

/**
*print_dog - a function that prints a struct dog
*@d: pointvoid print_dog(struct dog *d);s to the address of the structure
*
*Return: on success return void
*
*/

void print_dog(struct dog *d)
{
  if (d->name != NULL)
    printf("Name: %s\n", d->name);
  else
    printf("Name: (nil)\n");
  printf("Age: %f\n", d->age);
  if (d->owner-> != NULL)
    printf("Owner: %s\n", d->owner);
  else
    printf("Owner: (nil)\n");
}
