#include "dog.h"

/**
*init_dog - initialize a variable of type dog
*
*@d: points to the adress of the structure
*@name: points to the address of the name of the dog
*@age: age of the dog
*@owner: points to the owner of the dog
*
*Return: on success (void)
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
  if (d)
  {
    d->name = name;
    d->age = age;
    d->owner = owner;
  }
}
