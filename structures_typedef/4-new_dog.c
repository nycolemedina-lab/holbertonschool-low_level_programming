#include "dog.h"
#include <stdlib.h>
/**
* new_dog - creates a new struct
* @name: name of dog
* @age: age of dog
* @owner: owner of the dog
*
* Return: pointer to the new dog struc, of NULL on failure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int len_name = 0, len_owner = 0, a;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[len_name] != '\0')
		len_name++;
	while (owner[len_owner] != '\0')
		len_owner++;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) * (len_name + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (a = 0; a <= len_name; a++)
		d->name[a] = name[a];

	d->owner = malloc(sizeof(char) * (len_owner + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (a = 0; a <= len_owner; a++)
		d->owner[a] = owner[a];

	d->age = age;

	return (d);

}
