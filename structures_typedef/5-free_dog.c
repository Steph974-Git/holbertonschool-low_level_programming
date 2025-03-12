#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * free_dog - Libère la mémoire
 * @d: Pointeur vers la structure dog_t à libérer.
 * Cette fonction vérifie d'abord si le pointeur `d` n'est pas NULL.
 * Ensuite, elle libère la mémoire allouée `name` et `owner`,
 * si ces champs ne sont pas NULL.
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	return;

	if (d->name)
		free(d->name);

	if (d->owner)
		free(d->owner);

	free(d);
}
