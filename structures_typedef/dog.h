#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - Structure représentant un chien
 * @name: Nom du chien (chaîne de caractères)
 * @age: Âge du chien (nombre décimal)
 * @owner: Nom du propriétaire (chaîne de caractères)
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
