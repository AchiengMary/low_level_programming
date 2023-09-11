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
    printf("Name of dog: %s\n", d->name);
  else
    printf("Name of dog: (nil)\n");
  printf("Age of dog: %f\n", d->age);
  if (d->owner-> != NULL)
    printf("Owner of dog: %s\n", d->owner);
  else
    printf("Owner of the dog: (nil)\n");
}
