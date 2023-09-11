#include <stdlib.h>
#include "dog.h"

/**
* free_dog - function that frees dogs
*@d: points to the dog to be freed
*
*/
void free_dog(dog_t *d)
{
  if (d)
  {
    free(d->name);
    free(d->owner);
    free(d);
  }
}
