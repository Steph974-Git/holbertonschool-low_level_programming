#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * _strlen -  returns the length of a string
 * @s: My first strlen!
 * Return: i
 */

int _strlen(char *s)

{
int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * *_strcpy -   string pointed to by src
 * @dest: the pointer
 * @src:  string pointed
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
int length = 0;

	while (src[length] != '\0')
	{
	dest[length] = src[length];
	length++;
	}
	dest[length] = '\0';
	return (dest);
}

/**
 * *new_dog - Crée une nouvelle structure `dog_t` et initialise ses valeurs.
 * @name: Nom du chien (chaîne de caractères)
 * @age: Âge du chien (flottant)
 * @owner: Nom du propriétaire (chaîne de caractères)
 * Return: Pointeur vers la nouvelle structure `dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	if (name == NULL)
		return (NULL);

	if (owner == NULL)
		return (NULL);

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);

	ndog->name = malloc(_strlen(name) + 1);
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->owner = malloc(_strlen(owner) + 1);
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	_strcpy(ndog->name, name);
	_strcpy(ndog->owner, owner);
	ndog->age = age;

	return (ndog);
}
