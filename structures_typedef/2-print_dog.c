#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Affiche les informations d'une structure de type struct dog
 * @d: Pointeur vers la structure à afficher
 * Si le pointeur 'd' est NULL, la fonction ne fait rien.
 * Si un attribut de la structure est NULL, il est affiché comme "(nil)".
 * Sinon, la valeur de l'attribut est affichée.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
